#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: 0
 */
int main(void)
{
	int i, j;
	unsigned long long int n;
	int binary[255];

	printf("Enter a number:\n");
	scanf("%llu", &n);
	i = 0;

	while (n > 0)
	{
		binary[i] = n % 2;
		n /= 2;
		i++;
	}
	for (j = i - 1; j >= 0; j--)
	{
		printf("%d", binary[j]);
	}
	printf("\n");
	return (i);
}
