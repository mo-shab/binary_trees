#include "binary_trees.h"
/**
* binary_tree_depth - Function that measures the depth
* of a node in a binary tree
* @tree: the tree to measures/
*
* Return: The depth or 0 if tree is NULL.
*/

size_t binary_tree_depth(const binary_tree_t *tree)
{
	int count = 0;

	if (tree == NULL)
		return (0);
	if (tree->parent)
		count = 1 + binary_tree_depth(tree->parent);
	return (count);
}
