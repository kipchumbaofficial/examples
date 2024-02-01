#include "main.h"
/**
 * in_order - Traverses a binary tree in order
 * @root: Pointer to the root of a binary tree
 *
 * Return: Nothing
 */
void in_order(struct node *root)
{
	if (root != NULL)
	{
		in_order(root->left);
		printf("%d ", root->data);
		in_order(root->right);
	}
}
