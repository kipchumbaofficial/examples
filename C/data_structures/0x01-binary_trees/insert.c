#include "main.h"
/**
 * insert - Inserts data to a binary tree
 * @data: Data to be store
 *
 * Return: Nothing
 */
void insert(int data)
{
	struct node *temp = malloc(sizeof(struct node));
	struct node *current;
	struct node *parent;
	temp->data = data;
	temp->left = NULL;
	temp->right = NULL;

	if (root == NULL)
	{
		root = temp;
	}
	else
	{
		current = root;
		parent = NULL;
		while (1)
		{
			parent = current;
			if (data < parent->data)
			{
				current = current->left;
				if (current == NULL)
				{
					parent->left = temp;
					return;
				}
			}
			else
			{
				current = current->right;
				if (current == NULL)
				{
					parent->right = temp;
					return;
				}
			}
		}
	}
}
