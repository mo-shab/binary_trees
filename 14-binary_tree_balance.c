#include "binary_trees.h"

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
	if (tree == NULL)
		return (0);

	int left_height = binary_tree_height_2(tree->left) + 1;
	int right_height = binary_tree_height_2(tree->right) + 1;

	return (left_height - right_height);
}


/**
* binary_tree_height_2 - Function that measures the height of a binary tree.
* @tree: The binary tree.
*
* Return: the height of the tree, or 0 if tree is NULL.
*/
size_t binary_tree_height_2(const binary_tree_t *tree)
{
	int left = 0, right = 0;

	if (tree == NULL)
		return (0);

	left = 1 + binary_tree_height_2(tree->left);
	right = 1 + binary_tree_height_2(tree->right);

	return ((left > right) ? left : right);
}
