#include "binary_trees.h"
/**
 * binary_tree_insert_right - insert nodes to right of binary parent.
 * @parent: parent node.
 * @value: value of new node.
 * Return: a new node inserted to the right.
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *leaf, *scout;

	if (!parent)
		return (NULL);
	leaf = malloc(sizeof(binary_tree_t));
	if (leaf == NULL)
		return (NULL);
	leaf->left = NULL;
	leaf->right = NULL;
	scout = parent;

	if (!scout->right)
	{
		leaf->parent = scout;
		scout->right = leaf;
		leaf->n = value;
		return (leaf);
	}
	leaf->parent = scout;
	leaf->right = scout->right;
	scout->right->parent = leaf;
	scout->right = leaf;
	leaf->n = value;
	return (leaf);
}
