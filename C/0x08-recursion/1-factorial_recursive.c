#include <stdio.h>
/**
 * factorial - Calculates factorial recursively
 * @n: Number to passed
 *
 * Return: result
 */
int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
/**
 * main - Checks code
 *
 * Return: 0
 */
int main(void)
{
	int f;

	f = factorial(5);
	printf("5! = %d\n", f);
	return (0);
}
