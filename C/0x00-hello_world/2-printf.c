#include  <stdio.h>
/**
 * main - Prints formated output
 *
 * Return: 0
 */
int main(void)
{
	int num;
	char a, b, c;
	char *str;

	num = 10;
	a = 'L';
	b = 'E';
	c = 'O';
	str = " Messi ";
	printf("%c%c%c%s%d\n", a, b, c, str, num);
	return (0);
}
