#include "binary_trees.h"
/**
 * binary_tree_height - height of binary tree.
 * @tree: binary tree.
 * Return: height of binary tree.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_size = 0, right_size = 0;

	if (!tree)
		return (0);
	else if (tree->left || tree->right)
	{
		left_size = binary_tree_height(tree->left);
		right_size = binary_tree_height(tree->right);
		if (left_size > right_size)
			return (left_size + 1);
		return (right_size + 1);
	}
	else
		return (0);
}
/**
 * binary_tree_balance - find the difference between left and right height.
 * @tree: binary tree.
 * Return: difference between left and right height.
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int right_height = 0, left_height = 0;

	if (!tree)
		return (0);
	if (tree->left)
		left_height = binary_tree_height(tree->left) + 1;
	if (tree->right)
		right_height = binary_tree_height(tree->right) + 1;
	return (left_height - right_height);
}
