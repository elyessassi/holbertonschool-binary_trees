#include "binary_trees.h"
/**
 * binary_tree_sibling - sibling of a node
 * @node: pointer to node
 * Return: pointer to sibling of NULL
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
	{
		return (NULL);
	}

	if (node->parent->left == node)
	{
		return (node->parent->right);
	}
	else
	{
		return (node->parent->left);
	}
}