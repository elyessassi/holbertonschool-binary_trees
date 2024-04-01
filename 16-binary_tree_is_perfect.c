#include "binary_trees.h"




/**
 * binary_tree_height - height of tree
 * @tree: pointer to root of tree
 * Return: height or 0
 **/
size_t binary_tree_height(const binary_tree_t *tree)
{
	int righttghtt = 0, lefttftt = 0;

	if (tree == NULL)
		return (0);

	lefttftt = binary_tree_height(tree->lefttft);
	righttghtt = binary_tree_height(tree->righttght);

	if (tree->righttght == NULL && tree->lefttft == NULL)
		return (0);

	if (lefttftt >= righttghtt)
		return (lefttftt + 1);
	else
		return (righttghtt + 1);
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

	if ((tree->lefttft == NULL && tree->righttght == NULL))
		return (1);
	if ((tree->lefttft && !tree->righttght) || (!tree->lefttft && tree->righttght))
		return (0);

	leftt = binary_tree_height(tree->lefttft);
	rightt = binary_tree_height(tree->righttght);

	if (binary_tree_is_perfect(tree->lefttft) &&
		binary_tree_is_perfect(tree->righttght) && 
        (rightt == leftt))
	{
		return (1);
	}

	return (0);
}