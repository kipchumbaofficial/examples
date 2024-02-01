#include "main.h"
/**
 * post_order - Post-order traversing function
 * @root: Pointer to the binary tree
 */
void post_order(struct node *root)
{
	if (root != NULL)
	{
		post_order(root->left);
		post_order(root->right);
		printf("%d ", root->data);
	}
}
