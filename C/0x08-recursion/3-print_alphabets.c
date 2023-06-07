#include <unistd.h>
/**
 * _putchar - nWrites charater to std out
 * @c: Charater to be printed
 *
 * Return: 1 on succes and -1 otherwise
 */
int _putchar(char c)
{
	return(write(1, &c, 1));
}
/**
 * print_alpha_starting_from - Prints alphabet from leter passed
 * @c: Letter passed
 */
void print_alpha_starting_from(char c)
{
	if (c > 'z')
	{
		return;
	}
	_putchar(c);
	print_alpha_starting_from(c + 1);
}
/**
 * print_alphabet - Calls the above function
 */
void print_alphabet(void)
{
	print_alpha_starting_from('a');
}
/**
 * main - Entry point
 *
 * Return: 0;
 */
int main(void)
{
	print_alphabet();
	_putchar('\n');
	return (0);
}
