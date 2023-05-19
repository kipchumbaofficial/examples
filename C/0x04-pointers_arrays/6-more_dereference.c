#include <stdio.h>
/**
 * main - Derefence works the same for all data types
 *
 * Return: 0
 */
int main(void)
{
	int n;
	int *p;
	char c;
	char *ptr;

	n = 98;
	p = &n;
	c = 'H';
	ptr = &c;
	printf("Value of n is: %d\n", n);
	printf("Address of n is: %p\n", &n);
	printf("Value of p is: %p\n", p);
	printf("Value of c is: %c\n", c);
	printf("Address of c is: %p\n", &c);
	printf("Value of ptr is: %p\n", ptr);

	*p = 402;
	*ptr = 'o';
	printf("Value of n is: %d\n", n);
	printf("Value of c is: %c\n", c);
	return (0);
}
