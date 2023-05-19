#include <stdio.h>
/**
 * modif_my_char_var - Assign value of char to 'o'
 * @cc: Points to character to be changed
 * @ccc: Useless variable char
 *
 * Return: Nothing
 */
void modif_my_char_var(char *cc, char ccc)
{
	printf("Value of ccc after calling function is the value of C ie: %c\n", ccc);
	ccc = 'l';
	printf("/*ccc is initialized to 'l'*/\n");
	printf("Value of ccc then is: %c\n", ccc);
	printf("/*cc is initialized to memory address of c by function call\n");
	printf("Value of cc is: %p\n", cc);
	printf("/*cc is dereferenced to 'o'*/\n");
	*cc = 'o';
}
/**
 * main - How to change value of char outside a function it was defined in
 *
 * Return: 0
 */
int main(void)
{
	char c;
	char *p;

	p = &c;
	c = 'H';
	printf("Value of c is: %c\n", c);
	printf("Address of c is: %p\n", &c);
	printf("Value of p is: %p\n", p);
	printf("/*Calling modif_my_char_var*/\n");
	modif_my_char_var(p, c);
	printf("Value of c after function call is: %c\n", c);
	return (0);
}
