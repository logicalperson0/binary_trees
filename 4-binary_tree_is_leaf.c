#include "binary_trees.h"

/**
 *binary_tree_is_leaf -function that checks if a node is a leaf
 *@node:  pointer to the node to check
 *
 *Return: 1 if node is a leaf, otherwise 0
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	int leaf_node;

	if (node == NULL)
		return (0);

	if (node->left == NULL && node->right == NULL)
	{
		leaf_node = 1;
	}
	else
		leaf_node = 0;

	return (leaf_node);
}
