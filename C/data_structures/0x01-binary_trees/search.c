#include "main.h"
/**
 * search - Searches for a value
 * @data: given data
 * 
 * Return: Node with the data
 */
struct node *search(int data)
{
	struct node *current = root;
	
	while (current->data != data)
	{
		if (current->data > data)
		{
			current = current->left;
		}
		else
		{
			current = current->right;
		}
		if (current == NULL)
		{
			return (NULL);
		}
	}
	return (current);
}
