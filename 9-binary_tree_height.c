#include "binary_trees.h"

/**
 *binary_tree_recur - function that recursively the binary tree
 *@tree: pointer to the root node of the tree to measure the height
 *
 *Return: height of the tree
 */
size_t binary_tree_recur(const binary_tree_t *tree)
{
	int heightl, heightr;

	if (tree == NULL)
		return (0);

	else
	{
		heightl = binary_tree_recur(tree->left);
		heightr = binary_tree_recur(tree->right);

		if (heightl > heightr)
			return (heightl + 1);
		return (heightr + 1);
	}
}

/**
 *binary_tree_height - function that measures the height of a binary tree
 *@tree: pointer to the root node of the tree to measure the height
 *
 *Return: height of the tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	int height;

	if (!tree)
		return (0);

	height = binary_tree_recur(tree) - 1;

	return (height);
}
