#include <stdlib.h>
#include "binary_trees.h"
#include <stdio.h>

/**
 * binary_tree_insert_right - create a binary tree node right
 * @parent: pointer to the parent of the node
 * @value: value of the new node
 * Return: new node
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{

	binary_tree_t *newnode;

	if (parent == NULL)
		return (NULL);

	newnode = binary_tree_node(parent, value);

	if (parent->right == NULL)
		parent->right = newnode;
	else
	{
		newnode->right = parent->right;
		parent->right->parent = newnode;
		parent->right = newnode;
	}

	return (newnode);
}
