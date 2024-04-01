#include "binary_trees.h"
#include <stdio.h>


/**
 * binary_tree_uncle - find uncle of a node given
 * @node: pointer to node
 * Return: pointer to uncle node or NULL
*/

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *parent_of_parent;

	if (node == NULL || node->parent == NULL)
	{
		return (NULL);
	}

	parent_of_parent = (node->parent)->parent;

	if (parent_of_parent == NULL)
	{
		return (NULL);
	}

	if (parent_of_parent->left == node->parent)
	{
		return (parent_of_parent->right);
	}
	else
	{
		return (parent_of_parent->left);
	}
}
