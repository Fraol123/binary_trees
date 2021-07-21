#ifndef _BINARY_TREES_H_
#define _BINARY_TREES_H_

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stddef.h>

/**
 * struct binary_tree_s - Binary tree node
 *
 * @n: Integer stored in the node
 * @parent: Pointer to the parent node
 * @left: Pointer to the left child node
 * @right: Pointer to the right child node
 */
struct binary_tree_s
{
	int n;
	struct binary_tree_s *parent;
	struct binary_tree_s *left;
	struct binary_tree_s *right;
};

typedef struct binary_tree_s binary_tree_t;

/* print binary tree */
void binary_tree_print(const binary_tree_t *tree);

/* create binary tree node */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value);

/* insert node as left child of other node */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value);

/* insert node as right child of other node */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value);

/* deletes entire binary tree */
void binary_tree_delete(binary_tree_t *tree);

/* checks if a node is a leaf */
int binary_tree_is_leaf(const binary_tree_t *node);

/* checks if a node is a root */
int binary_tree_is_root(const binary_tree_t *node);

/* goes through binary tree using pre-order traversal */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int));

/* goes through binary tree using in-order traversal */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int));

/* goes through binary tree using post-order traversal */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int));

/* measures the height of a binary tree */
size_t binary_tree_height(const binary_tree_t *tree);

/* measures the depth of a node in a binary tree */
size_t binary_tree_depth(const binary_tree_t *tree);

/* measures the size of a binary tree */
size_t binary_tree_size(const binary_tree_t *tree);

/* counts the leaves in a binary tree */
size_t binary_tree_leaves(const binary_tree_t *tree);

/* counts the nodes with at least one child */
size_t binary_tree_nodes(const binary_tree_t *tree);

/* measures the balance factor */
int binary_tree_balance(const binary_tree_t *tree);

/* checks if binary tree is full */
int binary_tree_is_full(const binary_tree_t *tree);

/* checks if binary tree is perfect */
int binary_tree_is_perfect(const binary_tree_t *tree);

/* finds the sibling of a node */
binary_tree_t *binary_tree_sibling(binary_tree_t *node);

/* finds the uncle of a node */
binary_tree_t *binary_tree_uncle(binary_tree_t *node);



#endif /* _BINARY_TREES_H_ */
