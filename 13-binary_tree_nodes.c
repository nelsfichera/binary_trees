#include "binary_trees.h"
/**
 * binary_tree_nodes - count number of nodes with at least 1 child.
 * @tree: pointer to the root node.
 * Return: number of nodes with at least 1 leaf.
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	if (!tree->left && !tree->right)
		return (0);
	return (binary_tree_nodes(tree->left) + 1 +  binary_tree_nodes(tree->right));
}
