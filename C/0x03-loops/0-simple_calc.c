#include <stdio.h>
/**
 * main - Simple calculator program
 *
 * Return: 0
 */
int main(void)
{
	char operator;
	double x, y;

	printf("Enter one operator i.e +, -, * and /:\n");
	scanf("%c", &operator);
	printf("Enter two numbers:\n");
	scanf("%lf%lf", &x, &y);

	switch(operator)
	{
		case '+':
			printf("%.1f + %.1f = %.1f\n", x, y, x + y);
			break;
		case '-':
			printf("%.1f - %.1f = %.1f\n", x, y, x - y);
			break;
		case '/':
			printf("%.1f / %.1f = %.1f\n", x, y, x / y);
			break;
		case '*':
			printf("%.1f * %.1f = %.1f\n", x, y, x * y);
			break;
		default:
			printf("Erorr! Wrong operator\n");
	}
	return (0);
}
