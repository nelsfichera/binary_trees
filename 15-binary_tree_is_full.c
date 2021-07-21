#include "binary_trees.h"
/**
 * binary_tree_is_full - check if binary tree is full
 * @tree: binary tree
 * Return: 1 on success 0 on failure.
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	const binary_tree_t *t = tree;

	if (!t)
		return (0);
	if (!t->left && !t->right)
		return (1);
	if (t->left && t->right)
		return (binary_tree_is_full(t->left) && binary_tree_is_full(t->right));
	return (0);
}
