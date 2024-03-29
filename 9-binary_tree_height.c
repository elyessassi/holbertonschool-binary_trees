#include "binary_trees.h"
#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>
#include <stdbool.h>

/**
 * binary_tree_postorder - go throught a binary tree in a postorder order
 * @tree: pointer to a tree
 * @func: function to apply on data
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_h;
	size_t right_h;


	if (!tree)
		return (-1);
	else
	{
		left_h = binary_tree_height(tree->left) + 1;
		right_h = binary_tree_height(tree->right) + 1;
	}
	if (left_h > right_h)
		return (left_h);
	else
		return (right_h);
	
}