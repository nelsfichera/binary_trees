#include "binary_trees.h"
/**
 * binary_tree_inorder - print left, root, right.
 * @tree: binary tree.
 * @func: function pointer for printing.
 * Return: tree inorder.
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;
	if (tree->left)
		binary_tree_inorder(tree->left, func);
	if (tree)
		func(tree->n);
	if (tree->right)
		binary_tree_inorder(tree->right, func);
}
