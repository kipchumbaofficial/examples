#include "main.h"
/**
 * main - prints _putchar to std out
 *
 * Return: 0
 *
 */
int main(void)
{
	int i;
	char str[] = "_putchar";

	for(i = 0; i <= 9; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
	return (0);
}
