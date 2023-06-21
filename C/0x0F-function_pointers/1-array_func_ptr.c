#include <stdio.h>
/**
 * add - adds two int
 * @a: 1st
 * @b: 2nd
 */
void add(int a, int b)
{
	printf("Sum = %d\n", a + b);
}
void subtract(int a, int b)
{
	printf("Difference = %d\n", a - b);
}
void mult(int a, int b)
{
	printf("Product = %d\n", a * b);
}
/**
 * main - Checks code
 *
 * Return: 0
 */
int main(void)
{
	void (*fun_ptr_arr[])(int, int) = {add, subtract, mult};
	unsigned int i, a = 15, b = 10;
	printf("Please enter 0 for sum 1 for sub amd 2 for product\n");
	scanf("%d",&i);
	if (i > 2)
	{
		printf("Invalid!\n");
		return (1);
	}
	(*fun_ptr_arr[i])(a,b);
	return (0);
}
