#include "binary_trees.h"


/**
 * binary_tree_depth - a function that measures the max depth of a binary tree
 * @tree: pointer to the first node of tree
 * Return: depth of binary tree
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	int depth = 0;

	if (tree == NULL)
		return (0);

	while (tree->parent)
	{
		depth += 1;
		tree = tree->parent;
	}
	return (depth);
}
