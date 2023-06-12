#include <stdlib.h>
#include <stdio.h>
/**
 * printArray - Prints Array of integers
 * @size: Size of the array
 * @a: Array of integers
 */
void printArray(int *a, int size)
{
	int i;

	i = 0;
	while (i < size)
	{
		printf("%d\n", a[i]);
		i++;
	}
}
int main(int argc, char *argv[])
{
	int *a;
	int asize;
	int i;

	if (argc < 2)
	{
		printf("Please give me atleast one number\n");
		printf("Usage: %s number [NUMBER]\n", argv[0]);
		return (1);
	}
	asize = argc - 1;
	a = malloc(asize * sizeof(int));
	i = 0;
	while (i < asize)
	{
		a[i] = atoi(argv[i + 1]);
		i++;
	}
	printArray(a, asize);
	free(a);
	return (0);
}
