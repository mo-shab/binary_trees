#include "binary_trees.h"

/**
* binary_tree_postorder - function that goes through
* a binary tree using pre-order traversal.
* @tree: the root of the tree.
* @func: function to call for each node.
*
* Return: Nothing, If tree or func == NULL, do nothing.
*/

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}
