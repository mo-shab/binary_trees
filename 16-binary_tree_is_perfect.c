#include "binary_trees.h"
/**
* binary_tree_is_perfect - function to check if binary tree is perfect.
* @tree: The root node of the tree to check
*
* Return: 1 if perfect, 0 otherwise.
*/

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	size_t left_height = binary_tree_height_2(tree->left);
	size_t right_height = binary_tree_height_2(tree->right);

	int is_full = binary_tree_is_full_2(tree);


	if (is_full && left_height == right_height)
		return (1);
	else
		return (0);
}


/**
* binary_tree_is_full_2 - function to check if tree is full.
* @tree: the root node to check
*
* Return: 1 if full, 0 otherwise
*/

int binary_tree_is_full_2(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);
	if (tree->left != NULL && tree->right != NULL)
		return (binary_tree_is_full_2(tree->left)
			&& binary_tree_is_full_2(tree->right));

	return (0);
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
