#include <stdio.h>

/**
 * main - Uses if else and else if
 *
 * Return: 0
 */
int main(void)
{
	int age;
	char gender;
	char name[30];

	printf("Enter Your Name, Gender's first letter and  Age respectively\n");
	scanf("%s%c%d", name, &gender, &age);
	if (age < 20)
	{
		printf("Hi %s %c %d, You are a teenage girl\n", name, gender,  age);
	}
	return (0);
}
