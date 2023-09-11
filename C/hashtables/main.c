#include "main.h"
/**
 * main - Entry point
 *
 * Return: 0
 */

int main(void)
{
    unsigned int hash;

    hash = hash_function("Cau");
    printf("Hash Value -> %u\n", hash);
    return (0);
}
