#include <stdio.h>
/**
 * main - Illustrates more Pointer Arrithmetics
 *
 * Return: 0
 */
int main(void)
{
	int i;
	int a[2];
	int *p;

	p = &i;

	printf("p = &i\n p = %p\n", p);
	printf("p + 1 = %p\n", p +1);
	printf("p + 2 = %p\n", p + 2);
	printf("p + 10 = %p\n", p + 10);
	/*Possible because a is evaluated as*/
	/* int * (Array type decay)*/
	p = a;
	printf("p = a\n p = %p\n", p);
	return (0);
}
