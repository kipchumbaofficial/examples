#include "main.h"
/**
 * main - Checks code
 *
 * Return: 0
 */
int main(void)
{
	char key[100];
	unsigned long index;

	printf("Enter key: \n");
	scanf("%s", key);
	index = hash_function(key);
	printf("%s's index is %lu\n", key, index);
	return (0);
}
