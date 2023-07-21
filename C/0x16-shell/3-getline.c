#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
/**
 * main - Get line
 * @ac: Argument count
 * @av: Argument vector
 *
 * Return: 0
 */
int main(int ac, char **av)
{
	ssize_t characters;
	size_t bufsize = 1024;
	char *buffer;
	int i;

	if (ac != 1)
	{
		dprintf(2, "Usage: %s\n", av[0]);
		return (-1);
	}
	buffer = malloc(sizeof(char) * bufsize);
	if (buffer == NULL)
	{
		dprintf(2, "Failed to allocate space");
		return (-1);
	}
	for (;i > 0;i++)
	{
		printf("$ ");
		characters = getline(&buffer, &bufsize, stdin);
		if (characters == -1)
		{
			dprintf(2, "Failed to read");
			return (-1);
		}
		if (strcmp(buffer, "exit") == 0)
		{
			break;
		}
		else
		{
			printf("%s", buffer);
		}
	}
	return (0);
}
