#include "binary_trees.h"

/**
* binary_tree_sibling - function that finds the sibling of a node.
* @node: The node to find the sibling.
*
* Return: pointer to the sigling.
* NULL if the parent is null or node has no sigling.
*/

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node->parent == NULL || node == NULL)
		return (NULL);
	if (node->parent->left == node)
		return (node->parent->right);
	return (node->parent->left);
}
