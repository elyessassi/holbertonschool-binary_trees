#include "binary_trees.h"


/**
 * binary_tree_height - a function that measures the height of a binary tree
 * @tree: pointer to the first node of tree
 * Return: height of binary tree
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_h = 0;
	size_t right_h = 0;

	if (tree == NULL)
		return (0);

	right_h = binary_tree_height(tree->left);
	left_h = binary_tree_height(tree->right);


	if (tree->right == NULL && tree->left == NULL)
		return (0);

	if (right_h >= left_h)
		return (right_h + 1);
	else
		return (left_h + 1);
}
