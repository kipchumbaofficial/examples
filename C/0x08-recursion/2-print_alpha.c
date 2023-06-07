#include <unistd.h>
/**
 * _putchar - Writes C to std out
 * @c: Character to be printed
 *
 * Return: 1 on success
 * On error returns -1 and errno is set
 */
int _putchar(char c)
{
	return(write(1, &c, 1));
}
/**
 * print_alphabet - Prints Alphabet
 */
void print_alphabet(void)
{
	int a, z;

	a = 'a';
	z = 'z';
	while (a <= z)
	{
		_putchar(a);
		a++;
	}
}
/**
 * main - Checks code
 *
 * Return: 0;
 */
int main(void)
{
	print_alphabet();
	_putchar('\n');
	return (0);
}
