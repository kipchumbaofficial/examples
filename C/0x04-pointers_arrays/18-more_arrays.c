#include <stdio.h>
/**
 * main - Declaring initializing and accessing
 * array elements using for loop
 *
 * Return: 0
 */
int main(void)
{
	int a[10];
	int i, j;

	for (i = 0; i < 10; i++)
	{
		a[i] = i + 100;
	}
	for (j = 0; j < 10; j++)
	{
		printf("Element at %d is %d\n", j, a[j]);
	}
	return (0);
}
