#include <string.h>
#include <stdio.h>
/**
 * main - Utilizes C string manipulation functions
 *
 * Return: 0
 */
int main(void)
{
	char str1[] = "Hello";
	char str2[] = "World";
	char str3[12];
	int len;

	/*Copy string to another*/
	strcpy(str3, str1);
	printf("strcpy(str3, str1) = %s\n", str3);

	/*Concatenate two strings*/
	strcat(str1, str2);
	printf("strcat(str1, str2) = %s\n", str1);

	/*length of string*/
	len = strlen(str1);
	printf("strlen(str1) = %d\n", len);
	return (0);
}
