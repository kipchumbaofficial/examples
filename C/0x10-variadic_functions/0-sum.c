#include <stdarg.h>
#include <stdio.h>
/**
 * sum - Calculates sum
 * @i: Number of arguments
 *
 * Return: sum
 */
int sum(int i, ...)
{
	int j, sum = 0, num;
	va_list args;

	if (i == 0)
	{
		return (0);
	}
	va_start(args, i);

	for (j = 0; j < i; j++)
	{
		num = va_arg(args, int);
		sum += num;
	}
	va_end(args);
	return (sum);
}
/**
 * main -Checks code
 *
 * Return: 0
 */
int main(void)
{
	int r;

	r = sum(4, 1, 2, 3, 4);
	printf("%d\n", r);
	return (0);
}
