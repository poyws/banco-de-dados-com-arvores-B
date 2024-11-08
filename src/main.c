#include <stdio.h>
#include "database.h"

int main() {
    Database* db = db_create();

    db_insert(db, 10);
    db_insert(db, 20);
    db_insert(db, 5);

    int found = db_search(db, 10);
    printf("Key 10 found: %d\n", found);

    db_delete(db, 10);
    found = db_search(db, 10);
    printf("Key 10 found after deletion: %d\n", found);

    return 0;
}
