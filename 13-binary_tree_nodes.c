#include "binary_trees.h"

/**
 * binary_tree_is_leaf - checks if a node is a leaf
 *
 * @node: pointer to the node to check
 *
 * Return: 1 if node is a leaf, otherwise 0
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	return ((!node->left && !node->right) ? 1 : 0);
}

/**
 * binary_tree_nodes-function that counts the
 *nodes with at least 1 child in a binary tree
 *
 * @tree: a ptr to the root node of the tree to count the nodes with children
 *
 * Return: number of nodes with at least 1 child   * in a binary tree
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t left = 0, right = 0;

	if (tree == NULL || binary_tree_is_leaf(tree))
		return (0);

	left = binary_tree_nodes(tree->left);

	right = binary_tree_nodes(tree->right);

	return (left + right + 1);
}
