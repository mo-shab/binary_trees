#include "binary_trees.h"
/**
 * binary_trees_ancestor - function that finds the
 * lowest common ancestor of two nodes.
 * @first: The first node.
 * @second: The second node.
 *
 * Return: pointer of the lowest common ancestor of the two nodes.
 * if no common found, return NULL.
*/

binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
				     const binary_tree_t *second)
{
	binary_tree_t *p, *q;

	if (first == NULL || second == NULL)
		return (NULL);

	if (first == second)
		return ((binary_tree_t *)first);

	p = first->parent;
	q = second->parent;
	if (p == NULL || first == q || (!p->parent && q))
		return (binary_trees_ancestor(first, q));
	else if (q == NULL || p == second || (!q->parent && p))
		return (binary_trees_ancestor(p, second));
	return (binary_trees_ancestor(p, q));
}
