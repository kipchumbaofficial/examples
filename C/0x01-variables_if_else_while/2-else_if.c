#include <stdio.h>
/**
 * main - Uses if to check whether a nmber is pisitive or negative
 *
 * Return: 0
 */
int main(void)
{
	int n;

	printf("Please enter an integer:\n");
	scanf("%d", &n);

	if (n == 0)
	{
		printf("%d is Zero\n", n);
	}
	else if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else
	{
		printf("%d is negative\n", n);
	}
	return (0);
}
