#include "binary_trees.h"
#include <stdli.h>

/**
 * binary_tree_delete - Deletes a binary tree
 * @tree: A pointer to the root node
 */

 void binary_tree_delete(binary_tree_t *tree)
 {
    if (tree != NULL)
    {
        free(tree->left);
        free(tree->right);
        free(tree);
    }
 }