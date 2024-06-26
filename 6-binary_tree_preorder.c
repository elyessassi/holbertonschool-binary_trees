#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_preorder - go throught a binary tree in a preorder order
 * @tree: pointer to a tree
 * @func: function to apply on data
 */

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
	{
		return;
	}

	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
