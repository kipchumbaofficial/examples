#include <stdio.h>
void f(int *a);
/**
 * main - Illustrate Array type Decay
 *
 * Return: 0
 */
int main(void)
{
	int *p;
	int t[10];

	p = t; /*Works because of auto implicit conversion to (int *) */

	printf("p: %p\n", p);
	printf("t: %p\n", t);
	printf("&t[0] = %p\n", &t[0]);
	f(t);
	return (0);
}
/**
 * f - Prints value of pointer to type int
 * @a: Address of the integer to be printed
 *
 * Return: Nothing
 */
void f(int *a)
{
	printf("a: %p\n", a);
	return;
}
