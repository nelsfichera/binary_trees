#include "binary_trees.h"
/**
 * binary_tree_is_leaf - check if node is a leaf.
 * @node: tree node.
 * Return: 1 on success 0 on failure.
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node && !node->left && !node->right)
		return (1);
	return (0);
}
