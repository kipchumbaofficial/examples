#include "main.h"
/**
 * main - Entry point
 *
 * Return: 0;
 */
struct node *root = NULL;

int main(void)
{
	int i;
	int array[7] = {27, 14, 35, 10, 19, 31, 42};

	for (i = 0; i < 7; i++)
	{
		insert(array[i]);
	}
	printf("in-order Traversal: ");
	in_order(root);
	printf("\n");
	printf("Pre-order Traversal: ");
	pre_order(root);
	printf("\n");
	printf("Post-order Traversal: ");
	post_order(root);
	printf("\n");
	return (0);
}
