#include "binary_trees.h"
/**
 * binary_tree_depth - count the parents at given node of binary tree.
 * @tree: binary tree.
 * Return: depth of binary tree.
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t parent = 0;

	if (tree == NULL)
		return (0);

	parent = binary_tree_depth(tree->parent);
	if (!tree->parent)
		return (parent);
	return (parent + 1);
}
