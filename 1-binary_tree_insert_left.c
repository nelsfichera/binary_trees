#include "binary_trees.h"
/**
 * binary_tree_insert_left - insert node to left child of parent.
 * @parent: parent node.
 * @value: value of new node.
 * Return: new node inserted to the left child.
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
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
	while (scout)
	{
		if (!scout->left)
		{
			leaf->parent = scout;
			scout->left = leaf;
			leaf->n = value;
			return (leaf);
		}
		if (scout->left->n < value)
		{
			leaf->parent = scout;
			leaf->left = scout->left;
			scout->left->parent = leaf;
			scout->left = leaf;
			leaf->n = value;
			return (leaf);
		}
		scout = scout->left;
	}
	return (leaf);
}
