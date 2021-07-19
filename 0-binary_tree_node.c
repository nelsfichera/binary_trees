#include "binary_trees.h"
/**
 * binary_tree_node - Return a newly malloc'd node on tree
 * @parent: parent node.
 * @value: value of each node.
 * Return: new node
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *leaf;

	leaf = malloc(sizeof(binary_tree_t));

	if (leaf == NULL)
		return (NULL);
	leaf->parent = parent;
	leaf->n = value;
	leaf->left = NULL;
	leaf->right = NULL;

	return (leaf);
}
