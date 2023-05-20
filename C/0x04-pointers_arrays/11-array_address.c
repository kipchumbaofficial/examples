#include <stdio.h>
/**
 * main - Array name points to address of first elements
 *
 * Return: 0
 */
int main(void)
{
	int a[98];

	printf("a: %p\n", a);
	printf("&a[0]: %p\n", &a[0]);
	return (0);
}
