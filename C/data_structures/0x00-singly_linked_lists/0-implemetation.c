#include <stdlib.h>
#include <stdio.h>
/**
 * struct node - Structure of integer and a pointer
 * @num: Integer
 * @next: Pointer
 */
struct node
{
	int num;
	struct node *next;
};
/**
 * main - Implent and initialize a linked list
 *
 * Return: 0
 */
int main(void)
{
	int choice = 1;
	struct node *head, *newnode, *temp;
	head = newnode = temp = NULL;

	while (choice)
	{
		newnode = malloc(sizeof(struct node));
		printf("Enter a number to store:\n");
		scanf("%d", &newnode->num);
		newnode->next = NULL;

		if (head == NULL)
		{
			head = newnode;
			temp = newnode;
		}
		else
		{
			temp->next = newnode;
			temp = newnode;
		}
		printf("Enter 1 to create another linked list 0 otherwise\n");
		scanf("%d", &choice);
	}
	temp = head;
	while (temp != NULL)
	{
		printf("%d, ", temp->num);
		temp = temp->next;
	}
	printf("\n");
	return (0);
}
