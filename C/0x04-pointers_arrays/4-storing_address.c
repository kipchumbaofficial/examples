#include <stdio.h>
/**
 * main - Storing of address of a variable in a pointer
 *
 * Return: 0
 */
int main(void)
{
	int n;
	int *ptr;
	char c;
	char *cptr;
	float f;
	float *fptr;
	double d;
	double *dptr;

	n = 98;
	c = 'H';
	d = 10;
	f = 11.3;
	ptr = &n;
	cptr = &c;
	dptr = &d;
	fptr = &f;

	printf("Address of n is : %p\n", &n);
	printf("Value of ptr is : %p\n", ptr);
	printf("Address of c is : %p\n", &c);
	printf("Value of cptr is : %p\n", cptr);
	printf("Address of f is : %p\n", &f);
	printf("Value of fptr is : %p\n", fptr);
	printf("Address of d is : %p\n", &d);
	printf("Value of dptr is : %p\n", dptr);
	return (0);
}
