#include "binary_trees.h"
#include <stdio.h>

/**
 * binary_tree_height - gives the height of a binary tree
 * @tree: A pointer to the root node
 * Return: height
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree)
	{
		size_t left = 0, right = 0;

		if (tree->left)
			left = binary_tree_height(tree->left) + 1;
		else
			left = 1;

		if (tree->right)
			right = binary_tree_height(tree->right) + 1;
		else
			right = 1;

		if (left > right)
			return (left);
		else
			return (right);
	}
	return (0);
}

/**
 * binary_tree_balance - balance factor 
 * @tree: A pointer to a root of a tree
 * Return: 0 or balance factor
 */
int binary_tree_balance(const binary_tree_t *tree)
{

	if (tree)
	{
		return (binary_tree_height(tree->left) - binary_tree_height(tree->right));
	}

	return (0);
}