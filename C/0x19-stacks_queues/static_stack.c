#include "main.h"
/**
 * push - inserts to a stack
 */
void push()
{
	int element;

	if (top == LIMIT - 1)
		printf("Stack overflow\n");
	else
	{
		printf("Enter element to be inserted: ");
		scanf("%d", &element);
		top++;
		stack[top] = element;
	}
}
/**
 * pop - Deletes from a stack
 */
void pop()
{
	int element;

	if (top == -1)
		printf("Stack underflow\n");
	else
	{
		element = stack[top];
		printf("The deleted item is: %d\n", stack[top]);
		top--;
	}
}

/**
 * display - Displays elements of a stack
 */
void display()
{
	if (top == -1)
		printf("Stack underflow\n");
	else if (top > 0)
	{
		printf("Elements of the the stack are:\n");
		for (i = top; i >= 0; i--)
		{
			printf("%d\n", stack[i]);
		}
	}
	else if (top == 0)
	{
		printf("Only one element inserted:\n%d\n", stack[0]);
	}
}
