#include "binary_trees.h"

/**
 * binary_tree_size - Function that measures the size of a binary tree.
 * @tree: The root node of the tree.
 *
 * Return: 0 if NULL, or the size of the node.
*/

size_t binary_tree_size(const binary_tree_t *tree)
{

	if (tree == NULL)
		return (0);

	return (1 + binary_tree_size(tree->left) + binary_tree_size(tree->right));
}
