#include <stdio.h>
/**
 * main - Finds avarage of two floating points
 *
 * Return: 0
 */
int main(void)
{
	double a, b, avg;

	avg = 0;
	printf("Enter two numbers\n");
	scanf("%lf%lf", &a, &b);
	if (a > 10 || b > 10 || (a > 10 && b > 10))
	{
		printf("Value cann't be more than %.1f\n", 10.0);
	}
	else
	{
		avg = (a + b) / 2;

		printf("Media = %.1f\n", avg);
	}
	return(0);
}
