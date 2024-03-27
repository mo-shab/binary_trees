#include "binary_trees.h"

/**
* binary_tree_height - Function that measures the height of a binary tree.
* @tree: The binary tree.
*
* Return: the height of the tree, or 0 if tree is NULL.
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
	int left = 0, right = 0;

	if (tree == NULL)
		return (0);

	if (tree->left)
		left = 1 + binary_tree_height(tree->left);
	if (tree->right)
		right = 1 + binary_tree_height(tree->right);

	return ((left > right) ? left : right);
}
