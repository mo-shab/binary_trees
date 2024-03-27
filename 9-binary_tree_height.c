#include "binary_trees.h"

/**
* binary_tree_height - Function that measures the height of a binary tree.
* @tree: The binary tree.
*
* Return: the height of the tree, or 0 if tree is NULL.
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

return (findMax(binary_tree_height(tree->left),
	binary_tree_height(tree->right)) + 1);

}

/**
* findMax - function that return max of two int
* @a: The first int;
* @b: The second int;
*
* Return: The max.
*/

size_t findMax(size_t a, size_t b)
{
	if (a >= b)
		return (a);
	else
		return (b);
}
