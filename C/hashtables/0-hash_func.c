#include "main.h"
#define CAPACITY 50000
/**
 * Simple Hash Function Implemetation
 *
 * Return: index
 */
unsigned int hash_function(char *str)
{
    unsigned int j, i = 0;

    for (j = 0; str[j]; j++)
    {
        i += str[j];
    }
    return (i % CAPACITY);
}
