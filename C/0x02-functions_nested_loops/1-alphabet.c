#include "main.h"
/**
 * print_alphabet - prints alphabet to std out in lower case
 *
 * Return: Nothing
 */
void print_alphabet(void)
{
	int a, z, comma, space;

	a = 'a';
	z = 'z';
	comma = ',';
	space = ' ';
	while (a <= z)
	{
		if(a < z)
		{
			_putchar(a);
			_putchar(comma);
		}
		else
		{
			_putchar(a);
		}
		_putchar(space);
		a++;
	}
	_putchar('\n');
}
