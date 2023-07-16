#include <stdio.h>
#include <stdlib.h>
/**
 * main - Prints arguments
 * @ac: Argument count
 * @av: Argument vector
 *
 * Return: 0
 */
int main(int ac __attribute__((unused)), char **av)
{
	int i = 0;

	while (av[i] != NULL)
	{
		printf("%s\n", av[i]);
		i++;
	}
	return (0);
}
