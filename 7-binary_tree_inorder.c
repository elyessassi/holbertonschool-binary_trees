#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_inorder - go throught a binary tree in a preorder order
 * @tree: pointer to a tree
 * @func: function to apply on data
 */

void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
	{
		return;
	}

	binary_tree_inorder(tree->left, func);
	func(tree->n);
	binary_tree_inorder(tree->right, func);
}
