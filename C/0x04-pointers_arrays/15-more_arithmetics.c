#include <stdio.h>
/**
 * main - Illustrate more pointer arithmetics
 *
 * Return: 0
 */
int main(void)
{
	int a[5];
	int *p;
	int *p2;

	*a = 98;
	*(a + 1) = 198;
	*(a + 2) = 298;
	*(a + 3) = 398;
	*(a + 4) = 498;

	printf("Value of a[0] = %d\n", a[0]);
	printf("Value of a[1] = %d\n", a[1]);
	printf("Value of a[2] = %d\n", a[2]);
	printf("Value of a[3] = %d\n", a[3]);
	printf("Value of a[4] = %d\n", a[4]);
	printf("/*p is assigned address of a[1]*/\n");
	p = a + 1;
	printf("/*p is dereference to 98*/\n");
	*p = 98;
	printf("Value of a[1] is = %d\n", a[0]);
	printf("/*p2 is assigned address of a[3]\n");
	p2 = a + 3;
	printf("/*p is dereferenced to *p + 1337*/\n");
	*p2 = *p + 1337;
	printf("Value of a[3] now = %d\n", a[3]);
	return (0);
}
