#include <stdio.h>
#include <unistd.h>
/**
 * main - Fork example
 *
 * Return: 0
 */
int main(void)
{
	pid_t my_pid;
	pid_t pid;

	printf("\n---Before:fork---\n");
	pid = fork();

	if (pid == -1)
	{
		perror("error");
		return (1);
	}
	printf("\n---After: fork---\n");
	my_pid = getpid();
	printf("My pid is %u\n", my_pid);
	return (0);
}
