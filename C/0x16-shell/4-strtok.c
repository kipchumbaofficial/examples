#include <string.h>
#include <stdio.h>
#include <stddef.h>
/**
 * main - Check code
 *
 * Return: 0
 */
int main(void)
{
	char str[] = "Victor ALX Software Enginnering";
	char *token;

	token = strtok(str, " ");

	while(token != NULL)
	{
		printf("%s\n", token);
		token = strtok(NULL, " ");
	}
	return (0);
}
