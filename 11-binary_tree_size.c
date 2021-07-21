#include "binary_trees.h"

/**
* binary_tree_size - measures the size of a binary tree
*
* @tree: pointer to the root node
*
* Return: size or 0 if tree is null
*/
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t left = 0, right = 0;

	if (tree == NULL)
		return (0);

	left = binary_tree_size(tree->left);
	right = binary_tree_size(tree->right);
	return (1 + left + right);
}
