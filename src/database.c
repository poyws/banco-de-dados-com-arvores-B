#include <stdlib.h>
#include "database.h"

Database* db_create() {
    Database* db = (Database*)malloc(sizeof(Database));
    db->btree = btree_create();
    return db;
}

void db_insert(Database* db, int key) {
    btree_insert(&(db->btree), key);
}

int db_search(Database* db, int key) {
    return btree_search(db->btree, key);
}

void db_delete(Database* db, int key) {
    btree_delete(&(db->btree), key);
}
