#include <stdio.h>
/**
 * fib - Gets fibonacci series of a give number
 * @i: number of terms
 *
 * Return: Fibonacci series
 */
int fib(int n)
{
	if(n <= 1)
	{
		return (n);
	}
	else
	{
		return (fib(n - 1) + fib(n - 2));
	}
}
/**
 * main - Entry point
 *
 * Return: 0
 */
int main(void)
{
	int n, i;
	printf("Enter number of terms\n");
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		printf("%d ", fib(i));
	}
	printf("\n");
	return (0);
}
