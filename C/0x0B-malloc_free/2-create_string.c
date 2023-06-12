#include <stdio.h>
#include <stdlib.h>
/**
 * createString - Creates a string char c
 * @len: Length of string to be created
 * @c: Characret to create a string
 *
 * Return:String
 */
char *createString(int len, char c)
{
	char *s;
	int i;

	s = malloc((len + 1) * sizeof(char));
	if (s == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (i < len)
	{
		s[i] = c;
		i++;
	}
	s[i] = '\0';
	return (s);
}
/**
 * main - Entry point
 *
 * Return: 0
 */
int main(void)
{
	char *s;
	int i;
	char c;

	printf("Input number of Characters followed by Character\n");
	scanf("%d%c", &i, &c);
	s = createString(i, c);
	printf("%s\n", s);
	return (0);
}
