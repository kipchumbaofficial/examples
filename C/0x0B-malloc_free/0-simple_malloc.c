#include <stdio.h>
#include <stdlib.h>
/**
 * main - Intro to malloc
 *
 * Return: 0
 */
int main(void)
{
	char *ar;
	int n;

	n = 5;
	ar = malloc(n * sizeof(char));
	if (ar == NULL)
	{
		return (1);
	}
	ar[0] = 'C';
	ar[1] = 'o';
	ar[2] = 'o';
	ar[3] = 'l';
	ar[4] = '\0';
	printf("%s\n", ar);
	return (0);
}
