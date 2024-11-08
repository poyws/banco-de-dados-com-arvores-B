#include <stdio.h>
#include <stdlib.h>
#include "b_tree.h"

BTreeNode* btree_create() {
    BTreeNode* node = (BTreeNode*)malloc(sizeof(BTreeNode));
    node->key_count = 0;
    node->is_leaf = 1;
    return node;
}

void btree_insert(BTreeNode** root, int key) {
    if ((*root)->key_count == MAX_KEYS) {
        BTreeNode* new_root = btree_create();
        new_root->is_leaf = 0;
        new_root->children[0] = *root;
        *root = new_root;
    }
    BTreeNode* current = *root;
    if (current->is_leaf) {
        int i = current->key_count - 1;
        while (i >= 0 && key < current->keys[i]) {
            current->keys[i + 1] = current->keys[i];
            i--;
        }
        current->keys[i + 1] = key;
        current->key_count++;
    }
}

int btree_search(BTreeNode* root, int key) {
    int i = 0;
    while (i < root->key_count && key > root->keys[i]) {
        i++;
    }
    if (i < root->key_count && key == root->keys[i]) {
        return 1;
    } else if (root->is_leaf) {
        return 0;
    } else {
        return btree_search(root->children[i], key);
    }
}

void btree_delete(BTreeNode** root, int key) {
    BTreeNode* current = *root;
    int i = 0;
    while (i < current->key_count && key > current->keys[i]) {
        i++;
    }
    if (i < current->key_count && key == current->keys[i]) {
        if (current->is_leaf) {
            for (int j = i; j < current->key_count - 1; j++) {
                current->keys[j] = current->keys[j + 1];
            }
            current->key_count--;
        }
    } else if (!current->is_leaf) {
        btree_delete(&(current->children[i]), key);
    }
}
