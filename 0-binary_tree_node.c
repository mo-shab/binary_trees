#include "binary_trees.h"

/**
 * binary_tree_node - Function that create a new tree node.
 * @parent: The Parent of the node to create.
 * @value: The value of the node to create.
 *
 * Return: The new node created.
*/

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_tree;

	new_tree = malloc(sizeof(binary_tree_t));
	if (new_tree == NULL)
		return (NULL);

	new_tree->parent = parent;
	new_tree->n = value;
	new_tree->left = NULL;
	new_tree->right = NULL;

	return (new_tree);
}
