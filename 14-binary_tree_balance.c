#include "binary_trees.h"

/**
* _binary_tree_height - Function that measures the height of a binary tree.
* @tree: The binary tree.
*
* Return: the height of the tree, or 0 if tree is NULL.
*/

size_t _binary_tree_height(const binary_tree_t *tree)
{
	size_t l = 0;
	size_t r = 0;

	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		if (tree)
		{
			l = tree->left ? 1 + _binary_tree_height_b(tree->left) : 1;
			r = tree->right ? 1 + _binary_tree_height_b(tree->right) : 1;
		}
		return ((l > r) ? l : r);
	}
}

/**
 * binary_tree_balance - function that measures
 * the balance factor of a binary tree.
 * @tree: the root node of the tree to
 * measure the balance factor.
 *
 * Return: The measures or 0 otherwise.
*/

int binary_tree_balance(const binary_tree_t *tree)
{
	int right = 0, left = 0, total = 0;

	if (tree)
	{
		left = ((int)_binary_tree_height_b(tree->left));
		right = ((int)_binary_tree_height_b(tree->right));
		total = left - right;
	}
	return (total);
}
