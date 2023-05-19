#include <stdio.h>
/**
 * main - Prints size of a pointer
 *
 * Return: 0
 */
int main(void)
{
	int *i;
	char *c;
	float *f;
	double *d;

	printf("Size of 'pointer to int' is: %lu\n", sizeof(i));
	printf("Size of 'pointer to char' is: %lu\n", sizeof(c));
	printf("Size of 'pointer to float' is: %lu\n", sizeof(f));
	printf("Size of 'pointer to double' is: %lu\n", sizeof(d));
	return (0);
}
