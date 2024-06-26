#include <stdlib.h>
#include "binary_trees.h"
#include <stdio.h>

/**
 * binary_tree_insert_left - create a binary tree node left
 * @parent: pointer to the parent of the node
 * @value: value of the new node
 * Return: new node
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{

	binary_tree_t *newnode;

	if (parent == NULL)
		return (NULL);

	newnode = binary_tree_node(parent, value);

	if (parent->left == NULL)
		parent->left = newnode;
	else
	{
		newnode->left = parent->left;
		parent->left->parent = newnode;
		parent->left = newnode;
	}

	return (newnode);
}
