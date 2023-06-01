#include "binary_trees.h"

/**
 *binary_tree_rotate_right -performs a right-rotation on a binary tree
 *@tree: pointer to the root node of the tree to rotate
 *
 *Return: pointer to the new root node of the tree once rotated
 */
binary_tree_t *binary_tree_rotate_right(binary_tree_t *tree)
{
	binary_tree_t *newroot;

	if (!tree || !(tree->left))
		return (NULL);

	newroot = tree->left;

	if (!(newroot->right))
		tree->left = NULL;

	else
	{
		tree->left = newroot->right;
		newroot->right->parent = tree;
	}

	newroot->right = tree;
	newroot->parent = tree->parent;
	tree->parent = newroot;

	return (newroot);
}
