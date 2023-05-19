#include <stdio.h>
/**
 * modif_my_param - This function doesn't modify n
 * @m: useless integer
 *
 * Return: nothing
 */
void modif_my_param(int m)
{
	printf("Value before: %d\n", m);
	m = 402;
	printf("Value after: %d\n", m);
}
/**
 * main - parameters are passed by value
 *
 * Return: 0;
 */
int main(void)
{
	int n;

	n = 98;
	modif_my_param(n);
	return (0);
}
