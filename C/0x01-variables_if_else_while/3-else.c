#include <stdio.h>
/**
 * main - Checks last digit of a number
 *
 * Return: 0
 */
int main(void)
{
	int m, n;

	printf("Please Enter a Number:\n");
	scanf("%d", &n);

	m = n % 10;

	if (m == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, m);
	}
	else if (m > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, m);
	}
	else if (m < 6 && m != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, m);
	}
	return (0);
}
