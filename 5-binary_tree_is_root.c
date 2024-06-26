#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_is_root - check if a node is root
 * @node: pointer to a node
 * Return: 1 if root 0 if not
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);

	if (node->parent == NULL)
		return (1);
	return (0);
}
