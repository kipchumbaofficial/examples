#include <stdio.h>
/**
 * main - Dereference
 *
 * Return: 0
 */
int main(void)
{
	int n;
	int *p;

	n = 98;
	p = &n;
	printf("Value of n is: %d\n", n);
	printf("Address of n is: %p\n", &n);
	printf("Value of p is: %p\n", p);

	*p = 402; /*Dereferenceing*/
	printf("Value of n is: %d\n", n);
	return (0);
}
