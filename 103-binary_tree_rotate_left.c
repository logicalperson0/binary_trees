#include "binary_trees.h"

/**
 *binary_tree_rotate_left -that performs a left-rotation on a binary tree
 *@tree:  pointer to the root node of the tree to rotate
 *
 *Return: pointer to the new root node of the tree once rotated
 */
binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree)
{
	binary_tree_t *newroot = tree->right;

	if (!tree || !(tree->right))
		return (NULL);

	if (!(newroot->left))
		tree->right = NULL;

	else
	{
		tree->right = newroot->left;
		newroot->left->parent = tree;
	}

	newroot->left = tree;
	newroot->parent = tree->parent;
	tree->parent = newroot;

	return (newroot);
}
