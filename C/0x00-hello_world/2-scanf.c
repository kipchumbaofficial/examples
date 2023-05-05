#include <stdio.h>
/**
 * main - USing std input and output
 *
 * Return: 0
 */
int main(void)
{
	int jersey;
	char a, b;

	printf("Enter yourbest player's first two initials followed by Jersey number\n");
	scanf("%c%c%d", &a, &b, &jersey);
	printf("Your G.O.A.T is: %c%c%d\n", a, b, jersey);
	return (0);
}
