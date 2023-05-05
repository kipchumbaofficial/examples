#include <stdio.h>
/**
 * main - Entrypoint (size of datatypes in a computer)
 *
 * Return: 0
 */
int main(void)
{
	printf("Size of char is: %ld byte(s)\n", sizeof(char));
	printf("size of unsigned char is: %ld byte(s)\n", sizeof(unsigned char));
	printf("Size of short is: %ld byte(s)\n", sizeof(short));
	printf("size of unsigned short is: %ld byte(s)\n", sizeof(unsigned short));
	printf("Size of int is: %ld byte(s)\n", sizeof(int));
	printf("Size of  unsigned int is: %ld byte(s)\n", sizeof(unsigned int));
	printf("Size of float is: %ld byte(s)\n", sizeof(float));
	printf("Size of double is: %ld byte(s)\n", sizeof(double));
	printf("Size of long is: %ld byte(s)\n", sizeof(long));
	printf("Size of unsigned long is: %ld byte(s)\n", sizeof(unsigned long));
	printf("Size of long long is: %ld byte(s)\n", sizeof(long long));
	printf("Size of long int is: %ld byte(s)\n", sizeof(long int));
	printf("Size of short int is: %ld bytes(s)\n", sizeof(short int));
	return (0);
}
