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
/**
*binary_tree_insert_left - inserts a node as the left-child of another node
*
*@parent: pointer to the node to insert the left-child in
*@value: value to store in the new node
*
*Return: pointer to the created node
*/
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_left_node = NULL;

	if (parent == NULL)
		return (NULL);

	new_left_node = binary_tree_node(parent, value);

	new_left_node->left = parent->left;
	if (new_left_node->left != NULL)
		new_left_node->left->parent = new_left_node;

	parent->left = new_left_node;
	return (new_left_node);
}
