#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a binary tree
 *
 * @tree: pointer to the root node of the tree to measure the height
 *
 * Return: height or return 0 if tree is NULL
 */

size_t binary_tree_height(const binary_tree_t *tree)
{

	size_t depth_left, depth_right, height;

	if (tree == NULL)
		return (0);

	depth_left = binary_tree_height(tree->left);

	depth_right = binary_tree_height(tree->right);

	height = ((depth_left > depth_right) ? depth_left : depth_right) + 1;

	return (height);
}

/**
 * binary_tree_balance - measures the balance factor of a binary tree
 *
 * @tree: pointer to the root node of the tree to measure the balance factor
 *
 * Return: balance factor or 0 if tree is NULL
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int left, right;

	if (tree == NULL)
		return (0);

	left = binary_tree_height(tree->left);
	right = binary_tree_height(tree->right);

	return (left - right);
}
