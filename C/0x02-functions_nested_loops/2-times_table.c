#include "main.h"
/**
 * times_table - Prints times table from zoro to nine
 */
void times_table(void)
{
	int num, c;
	char a, b;

	a = ',';
	b = ' ';
	for (num = 0; num <= 9; num++)
	{
		_putchar('0' + num * 0);
		_putchar(a);
		_putchar(b);
		_putchar('0' + num * 1);
		_putchar(a);
		_putchar(b);
		c = num * 2;
		if (c > 9)
		{
			_putchar('0' + c / 10);
			_putchar('0' + c % 10);
			_putchar(a);
			_putchar(b);
		}
		else
		{
			_putchar(b);
			_putchar('0' + num * 2);
			_putchar(a);
			_putchar(b);
		}
		c = num * 3;
		if (c > 9)
		{
			_putchar('0' + c / 10);
			_putchar('0' + c % 10);
			_putchar(a);
			_putchar(b);
		}
		else
		{
			_putchar(b);
			_putchar('0' + num * 3);
			_putchar(a);
			_putchar(b);
		}
		c = num * 4;
		if (c > 9)
		{
			_putchar('0' + c / 10);
			_putchar('0' + c % 10);
			_putchar(a);
			_putchar(b);
		}
		else
		{
			_putchar(b);
			_putchar('0' + num * 4);
			_putchar(a);
			_putchar(b);
		}
		c = num * 5;
		if (c > 9)
		{
			_putchar('0' + c / 10);
			_putchar('0' + c % 10);
			_putchar(a);
			_putchar(b);
		}
		else
		{
			_putchar(b);
			_putchar('0' + num * 5);
			_putchar(a);
			_putchar(b);
		}
		c = num * 6;
		if (c > 9)
		{
			_putchar('0' + c / 10);
			_putchar('0' + c % 10);
			_putchar(a);
			_putchar(b);
		}
		else
		{
			_putchar(b);
			_putchar('0' + num * 6);
			_putchar(a);
			_putchar(b);
		}
		c = num * 7;
		if (c > 9)
		{
			_putchar('0' + c / 10);
			_putchar('0' + c % 10);
			_putchar(a);
			_putchar(b);
		}
		else
		{
			_putchar(b);
			_putchar('0' + num * 7);
			_putchar(a);
			_putchar(b);
		}
		c = num * 8;
		if (c > 9)
		{
			_putchar('0' + c / 10);
			_putchar('0' + c % 10);
			_putchar(a);
			_putchar(b);
		}
		else
		{
			_putchar(b);
			_putchar('0' + num * 8);
			_putchar(a);
			_putchar(b);
		}
		c = num * 9;
		if (c > 9)
		{
			_putchar('0' + c / 10);
			_putchar('0' + c % 10);
			_putchar(b);
		}
		else
		{
			_putchar(b);
			_putchar('0' + num * 9);
			_putchar(b);
		}
		_putchar('\n');
	}
}
