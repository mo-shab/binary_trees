#include "binary_trees.h"

/**
* binary_tree_is_full - function to check if tree is full.
* @tree: the root node to check
*
* Return: 1 if full, 0 otherwise
*/

int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
	return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);
	if (tree->left != NULL && tree->right != NULL)
		return (is_full_binary_tree(tree->left) && is_full_binary_tree(tree->right));

	return (0);
}
