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
/**
 * perfection - recursive function to test if tree is perfect
 * @tree: binary tree.
 * @depth: depth of tree.
 * @level: level of tree.
 * Return: 1 on success 0 on failure.
 */
int perfection(const binary_tree_t *tree, size_t depth, size_t level)
{
	if (!tree->left && !tree->right)
		return (depth == level + 1);
	if (!tree->left || !tree->right)
		return (0);
	return (perfection(tree->left, depth, level + 1) &&
		perfection(tree->right, depth, level + 1));
}
/**
 * binary_tree_is_perfect - checks if binary tree is perfect.
 * @tree: binary tree.
 * Return: 1 on success 0 on failure.
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t depth;

	depth = binary_tree_depth(tree);

	if (!tree)
		return (0);
	if (perfection(tree, depth, 0))
		return (1);
	return (0);
}
