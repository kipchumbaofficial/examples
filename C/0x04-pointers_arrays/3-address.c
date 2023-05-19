#include <stdio.h>
/**
 * main - Prints address using unary operator '&'
 *
 * Return: 0
 */
int main(void)
{
	int n;
	char c;

	printf("Address of n is: %p\n", &n);
	printf("Address of c is: %p\n", &c);
	return (0);
}
