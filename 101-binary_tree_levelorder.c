#include "binary_trees.h"

/**
* binary_tree_height_c - function that return the height of a tree.
* @tree: pointer of the root of the tree.
*
* Return: The height of the tree.
*/

size_t binary_tree_height_c(const binary_tree_t *tree)
{
	int left = 0, right = 0;

	if (tree == NULL)
		return (0);

	if (tree->left)
		left = 1 + binary_tree_height_c(tree->left);
	if (tree->right)
		right = 1 + binary_tree_height_c(tree->right);

	return ((left > right) ? left : right);
}


/**
* binary_tree_levelorder - function that goes
* through a binary tree using level-order traversal.
* @tree: root node to the tree to traverse.
* @func: func to call for each node.
*
* Return: Nothing. if tree or func is NULL, do nothing.
*/


void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;

	binary_tree_t **queue = malloc(sizeof(binary_tree_t *)
		* binary_tree_size(tree));

	if (queue == NULL)
		return;

	int front = 0, rear = 0;

	binary_tree_t *temp_node;

	queue[rear++] = (binary_tree_t *)tree;

	while (front < rear)
	{
		temp_node = queue[front++];
		func(temp_node->n);
		if (temp_node->left != NULL)
			queue[rear++] = temp_node->left;
		if (temp_node->right != NULL)
			queue[rear++] = temp_node->right;
	}
	free(queue);
}

/**
* binary_tree_size - Measure the size (number of nodes) of a binary tree.
* @tree: The binary tree.
* Return: The size of the tree.
*/
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (1 + binary_tree_size(tree->left) + binary_tree_size(tree->right));
}
