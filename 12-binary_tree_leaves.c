#include "binary_trees.h"


/**
 * binary_tree_leaves - a function that measures the number of leafs in  a binary tree
 * @tree: pointer to the first node of tree
 * Return: number of leaves in the binary tree
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{

	return (binary_tree_leaves(tree->left));
    return (binary_tree_leaves(tree->right));

	if (tree == NULL)
		return (1);


}
