#include "binary_trees.h"
/**
 * binary_tree_preorder - order by root, left, right.
 * @tree: binary tree
 * @func: function pointer for printing.
 * Return: ordered
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;
	func(tree->n);
	if (tree->left)
		binary_tree_preorder(tree->left, func);
	if (tree->right)
		binary_tree_preorder(tree->right, func);
}
