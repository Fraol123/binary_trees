#include "binary_trees.h"

/**
 * binary_tree_leaves- function that counts the
 *                  number of leaves in a binary tree
 *
 * @tree: ptr to the root node of the tree to count the leaves in
 *
 * Return: number of leaves in binary tree
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t left, right;

	if (tree == NULL)
		return (0);

	if (binary_tree_is_leaf(tree))
		return (1);


	left = binary_tree_leaves(tree->left);
	right = binary_tree_leaves(tree->right);
	return (left + right);
}
