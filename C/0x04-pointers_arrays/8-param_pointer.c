#include <stdio.h>
/**
 * modif_my_param - Initializes an int to 402
 *
 * @m: Pointer to the integer we want to set to 402
 *
 * Return: Nothing
 */
void modif_my_param(int *m)
{
	printf("Value of m is: %p\n", m);
	printf("Address of m is: %p\n", &m);
	*m = 402;
}
/**
 * main - how to change the value of a variable outside
 * a function it was declared
 *
 * Return: Always 0
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
	printf("Address of p is: %p\n",&p);

	modif_my_param(p);
	printf("/*Assigning m the value of p/*\n");
	printf("/*Value of p is the address of n so now m also points to n*/\n");
	printf("/*When *m = 402 is executed it assigns 402 to the n hence:*/\n");
	printf("Value of n after the call is: %d\n", n);
	return (0);
}
