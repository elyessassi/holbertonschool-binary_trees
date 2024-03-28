#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_is_leaf - check if a node is a leaf
 * @node: pointer to a node
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node->right == NULL && node->left == NULL)
		return (1);
	else
		return (0);
}
