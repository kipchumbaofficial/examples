#include <stdio.h>
/**
 * printMultTable - Prints multiplacation of a giveninumber
 * @tableSize: Entered number
 */
void printMultTable(int tableSize)
{
	int i, j;
	for (i = 1; i <= tableSize; i++)
	{
		printf("%4d", i);
	}
	for (i = 1; i <= tableSize; i++)
	{
		printf("%4d", i);
		for (j = 1; i <= tableSize; j++)
		{
			printf("%4d", i * j);
		}
		printf("\n");
	}
}
/**
 * main - Checks code
 *
 * Return: 0
 */
int main(void)
{
	int i;
	printf("Please input a positive number:\n");
	scanf("%d", &i);
	printMultTable(i);
	return (0);
}
