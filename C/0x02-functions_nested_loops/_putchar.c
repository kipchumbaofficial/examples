#include <unistd.h>
/**
 * _putchar - Writs char c to std out
 * @c: Character to be printed
 *
 * Return: 1 on Succes
 * On error -1 and errno is set appropriately
 */
int _putchar(char c)
{
	return(write(1, &c, 1));
}
