#include "binary_trees.h"
/**
 * binary_tree_is_perfect - checks if binary tree is perfect.
 * @tree: binary tree.
 * Return: 1 on success 0 on failure.
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t depth;

	depth = binary_tree_depth(tree);

	if (tree == NULL)
		return (0);
	if (!(tree->left) && !(tree->right))
		return (1);
	if (binary_tree_height(tree->left) != binary_tree_height(tree->right))
		return (0);
	return (binary_tree_is_perfect(tree->left) &&
		binary_tree_is_perfect(tree->right));
}
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

