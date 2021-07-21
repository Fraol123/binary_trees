#include "binary_trees.h"

/**
 * binary_tree_node - creates a new binary tree node
 *
 *@parent: pointer to parent
 *@value: value in binary tree
 *
 * Return: pointer to binary tree
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node = NULL;

	new_node = malloc(sizeof(binary_tree_t));
	if (new_node == NULL)
		return (NULL);

	new_node->parent = parent;
	new_node->n = value;
	new_node->right = NULL;
	new_node->left = NULL;

	return (new_node);
}
