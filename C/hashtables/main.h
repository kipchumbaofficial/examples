#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/*Hash table item*/
typedef struct ht_item
{
    char *key;
    char *value;
} ht_item;
/*HashTable*/
typedef struct hashtable
{
    ht_item **items;
    int size;
    int count;
} hashtable;

unsigned int hash_func(char *str);

#endif
