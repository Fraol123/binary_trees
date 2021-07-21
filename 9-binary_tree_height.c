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
