#ifndef DATABASE_H
#define DATABASE_H

#include "b_tree.h"

typedef struct Database {
    BTreeNode* btree;
} Database;

Database* db_create();
void db_insert(Database* db, int key);
int db_search(Database* db, int key);
void db_delete(Database* db, int key);

#endif
