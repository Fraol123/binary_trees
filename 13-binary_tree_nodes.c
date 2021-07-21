#include "binary_trees.h"
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
	if (tree == NULL || binary_tree_is_leaf(tree))
		return (0);
	
	size_t left = 0, right = 0;

	left = binary_tree_nodes(tree->left);
	
	right = binary_tree_nodes(tree->right);

	return (left + right + 1);
}
