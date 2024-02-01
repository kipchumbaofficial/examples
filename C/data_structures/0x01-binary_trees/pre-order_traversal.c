#include "main.h"
/**
 * pre_order - Pre-order traversing function
 * @root: Pointer to the root of a binary tree
 */
void pre_order(struct node *root)
{
	if (root != NULL)
	{
		printf("%d ", root->data);
		pre_order(root->left);
		pre_order(root->right);
	}
}
