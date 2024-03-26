#include "binary_trees.h"

/**
* binary_tree_insert_left - function that insert node at left.
* @parent: The parent of the tree.
* @value: The value of the node.
*
* Return: The pointer to the created node,
* or NULL if failed or parent is NULL.
*/

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	if (parent == NULL)
		return (NULL);

	new_node = binary_tree_node(parent, value);

	if (new_node == NULL)
		return (NULL);

	if (parent->left != NULL)
	{
		new_node->left = parent->left;
		parent->left->parent = new_node;
	}

	parent->left = new_node;

	return (new_node);
}
