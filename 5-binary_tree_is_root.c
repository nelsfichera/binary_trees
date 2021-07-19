#include "binary_trees.h"
/**
 * binary_tree_is_root - check if node is root.
 * @node: binary tree node.
 * Return: 1 on success 0 on failure.
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node && !node->parent)
		return (1);
	return (0);
}
