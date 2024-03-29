#include "binary_trees.h"


/**
 * binary_tree_size - a function that measures the size of a binary tree
 * @tree: pointer to the first node of tree
 * Return: size of binary tree
 */

size_t binary_tree_size(const binary_tree_t *tree)
{

	if (tree == NULL)
		return (0);

	return (binary_tree_size(tree->left) + 1 + binary_tree_size(tree->right));
}
