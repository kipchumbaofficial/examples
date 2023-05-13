#include <stdio.h>
/**
 * main -Sum of natural numbers
 *
 * Return: 0
 */
int main(void)
{
	int num, count, sum;

	printf("Enter a positive number\n");
	scanf("%d", &num);
	sum = 0;
	for (count = 1; count <= num; count++)
	{
		sum += count;
	}
	printf("Sum = %d\n", sum);
	return (0);
}
