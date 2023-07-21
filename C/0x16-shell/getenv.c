#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>

extern char **environ;

/**
 * _getenv - Gets environment variable valu
 * @name: Name of the variable
 *
 *
 * Return: value
 */
char *_getenv(const char *name)
{
	char *retval = NULL;
	char **envi;
	int len = strlen(name);

	for (envi = environ; *envi != NULL; envi++)
	{
		if (strncmp(*envi, name, len) == 0 && (*envi)[len] == '=')
		{
			retval = *envi + len + 1;
			break;
		}
	}
	return (retval);
}
/**
 * main - check cde
 *
 * Return: 0
 */
int main(void)
{
	char *str = _getenv("PATH");

	if (str != NULL)
	{
		printf("The path is:\n %s\n", str);
	}
	else
	{
		printf("Eroor\n");
	}
	return (0);
}
