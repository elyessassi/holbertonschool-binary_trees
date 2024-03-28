#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_postorder - go throught a binary tree in a postorder order
 * @tree: pointer to a tree
 * @func: function to apply on data
 */

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
	{
		return;
	}

	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}
