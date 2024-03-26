#include "binary_trees.h"

/**
* binary_tree_is_leaf - function to checks if node is leaf.
* @node: The node to checks.
*
* Return: 1 if leaf, 0 otherwise.
*/

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL || node->left != NULL || node->right != NULL)
		return (0);

	return (1);
}
