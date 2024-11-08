#ifndef B_TREE_H
#define B_TREE_H

#define MAX_KEYS 3
#define MIN_KEYS (MAX_KEYS / 2)

typedef struct BTreeNode {
    int keys[MAX_KEYS];
    struct BTreeNode* children[MAX_KEYS + 1];
    int key_count;
    int is_leaf;
} BTreeNode;

BTreeNode* btree_create();
void btree_insert(BTreeNode** root, int key);
int btree_search(BTreeNode* root, int key);
void btree_delete(BTreeNode** root, int key);

#endif
