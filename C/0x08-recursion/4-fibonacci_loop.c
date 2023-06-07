#include <stdio.h>
/**
 * fibonacci - Gets fibonacci series of number entered
 */
void fibonacci(void)
{
	int i, n, a, b, c;

	a = 0;
	b = 1;
	printf("Enter a Number\n");
	scanf("%d", &n);

	for(i = 0; i < n; i++)
	{
		if (i == 0 || i == 1)
		{
			c = i;
		}
		else
		{
			c = a + b;
			a = b;
			b = c;
		}
		printf("%d, ", c);
	}
	printf("\n");
}
/**
 * main - Entry point
 *
 * Return: 0
 */
int main(void)
{
	fibonacci();
	return (0);
}
