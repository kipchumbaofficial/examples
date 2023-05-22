#include <stdio.h>
/**
 * main - You can use double quotes to store
 * text in an array of chars
 *
 * Return: 0
 */
int main(void)
{
	char a[7] = "School";

	printf("%s\n", a);
	printf("Value of Last Character of C %d\n", a[9]);
	printf("value of a : %p\n", a);
	printf("Value of \"School\": %p\n", "School");
	return (0);
}
