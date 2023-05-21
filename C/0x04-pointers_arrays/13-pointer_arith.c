#include <stdio.h>
/**
 * main - Illustrate pointer Arithmetics
 *
 * Return: 0
 */
int main(void)
{
	int a[5];

	*a = 98; /*Equivalent to *(a + 0)*/
	*(a + 1) = 198;
	*(a + 2) = 298;
	*(a + 3) = 398;
	*(a + 4) = 498;

	printf("Value of a[0] = %d\n", a[0]);
	printf("Value of a[1] = %d\n", *(a + 1));
	printf("Value of a[2] = %d\n", *(a + 2));
	printf("Value of a[3] = %d\n", *(a + 3));
	printf("Value of a[4] = %d\n", *(a + 4));
	printf("---------------------------\n");
	printf("Value of 'a' which is equivalent to address of array is  = %p\n", a);
	printf("Address of 'a[0]' is = %p\n", a + 1);
	printf("Address of '*(a + 1) = %p\n", &(*(a + 1)));
	return (0);
}
