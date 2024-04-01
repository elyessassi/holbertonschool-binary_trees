#include "binary_trees.h"




/**
 * binary_tree_height - height of tree
 * @tree: pointer to root of tree
 * Return: height or 0
 **/
size_t binary_tree_height(const binary_tree_t *tree)
{
	int rightt = 0, leftt = 0;

	if (tree == NULL)
		return (0);

	leftt = binary_tree_height(tree->left);
	rightt = binary_tree_height(tree->right);

	if (tree->right == NULL && tree->left == NULL)
		return (0);

	if (leftt >= rightt)
		return (leftt + 1);
	else
		return (rightt + 1);
}



/**
 * binary_tree_is_perfect - check if a tree is perfect
 * @tree: pointer to root
 * Return: 1 or 0
 **/
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int leftt, rightt;

	if (tree == NULL)
		return (0);

	if ((tree->left == NULL && tree->right == NULL))
		return (1);
	if ((tree->left && !tree->right) || (!tree->left && tree->right))
		return (0);

	leftt = binary_tree_height(tree->left);
	rightt = binary_tree_height(tree->right);

	if (binary_tree_is_perfect(tree->left) &&
		binary_tree_is_perfect(tree->right) && 
        (rightt == leftt))
	{
		return (1);
	}

	return (0);
}