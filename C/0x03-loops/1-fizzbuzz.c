#include <stdio.h>
/**
 * main - Prints fizz if number is multiple of 3
 * buzz if multiple of 5 and fizzbuzz if both
 *
 * Return: 0
 */
int main(void)
{
	int i;

	for (i = 0; i < 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("fizzbuzz, ");
		}
		else if (i % 3 == 0)
		{
			printf("fizz, ");
		}
		else if (i % 5 == 0)
		{
			printf("buzz, ");
		}
		else
		{
			printf("%d, ", i);
		}
	}
	printf("buzz");
	printf("\n");
	return (0);
}
