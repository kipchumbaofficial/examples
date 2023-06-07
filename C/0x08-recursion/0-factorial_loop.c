#include <stdio.h>
/**
 * factorial - Calculates factorial of a number
 * @n: Number passed
 *
 * Return: Result
 */
int factorial(int n)
{
	int i, res;

	i = 1;
	res = 1;
	while (i <= n)
	{
		res *= i;
		i++;
	}
	return (res);
}
/**
 * main - Checks code
 *
 * Return: Always 0;
 */
int main(void)
{
	int f;
	f = factorial(5);
	printf("5! = %d\n", f);
	return (0);
}
