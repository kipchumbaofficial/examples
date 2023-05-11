#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: 0
 */
int main(void)
{
	int a;

	a = 10;
	while (a < 20)
	{
		printf("Value of a is: %d\n", a);
		++a;
	}
	return (0);
}
