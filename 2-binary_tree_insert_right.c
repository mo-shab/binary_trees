#include "binary_trees.h"

/**
* binary_tree_insert_right - function that insert node at right.
* @parent: The parent of the tree.
* @value: The value of the node.
*
* Return: The pointer to the created node,
* or NULL if failed or parent is NULL.
*/

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	if (parent == NULL)
		return (NULL);

	new_node = binary_tree_node(parent, value);

	if (new_node == NULL)
		return (NULL);

	if (parent->right != NULL)
	{
		new_node->right = parent->right;
		parent->right->parent = new_node;
	}

	parent->right = new_node;

	return (new_node);
}
