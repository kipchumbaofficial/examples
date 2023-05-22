#include <stdio.h>
/**
 * main - Character array
 *
 * Return: 0
 */
int main(void)
{
	char a[7];

	*a = 'S';
	*(a + 1) = 'c';
	*(a + 2) = 'h';
	*(a + 3) = 'o';
	*(a + 4) = 'o';
	*(a + 5) = 'l';

	printf("%c%c%c%c%c%c\n", a[0], a[1], a[2], a[3], a[4], a[5]);
	return (0);
}
