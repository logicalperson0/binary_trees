#include "binary_trees.h"

/**
 *binary_tree_size - function that measures the size of a binary tree
 *@tree: pointer to the root node of the tree to measure the size
 *
 *Return: size of tree
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	int sizel, sizer, size;

	if (tree == NULL)
		return (0);

	sizel = binary_tree_size(tree->left);
	sizer = binary_tree_size(tree->right);

	size = (sizel + sizer + 1);

	return (size);
}
