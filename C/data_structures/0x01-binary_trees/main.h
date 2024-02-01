#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>

/**
 * struct node - Node structure
 * @data: Data part
 * @left: Pointer to the left child
 * @right: Pointer to the right child
 *
 * Description: Structure for each node of the binary tree
 */
struct node {
	int data;
	struct node *left;
	struct node *right;
};

extern struct node *root;

void insert(int data);
void in_order(struct node *root);

#endif
