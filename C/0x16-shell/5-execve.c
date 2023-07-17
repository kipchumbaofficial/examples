#include <stdio.h>
#include <unistd.h>
/**
 * main - execve function
 *
 * Return: 0
 */
extern char *environ[];

int main(void)
{
	char *arg[] = {"/bin/ls", "-l", NULL};

	printf("\n---Before: execve---\n");
	if (execve(arg[0], arg, environ) == -1)
	{
		perror("Error");
	}
	printf("---After: execve\n");
	return (0);
}
