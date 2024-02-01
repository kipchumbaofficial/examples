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
	struct node *retval;

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
	printf("Searching...\n");
	retval = search(14);
	if (retval != NULL)
		printf("%d Found\n", retval->data);
	else
		printf("%d Not in the binary search tree\n", retval->data);

	return (0);
}
