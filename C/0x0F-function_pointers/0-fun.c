#include <stdio.h>
/**
 * fun - Prints value of a
 * @a: Integer
 */
void fun(int a)
{
	printf("Value of a is %d\n", a);
}
/**
 * main - Checks code
 *
 * Return: 0
 */
int main(void)
{
	void (*fun_ptr)(int) = fun;

	(*fun_ptr)(10);
	return (0);
}
