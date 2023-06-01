#include "binary_trees.h"

/**
 *binary_tree_is_perfect - function that checks if a binary tree is perfect
 *@tree: pointer to the root node of the tree to check
 *
 *Return: 1 for perfect, 0 otherwise
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int perfectl, perfectr, heightl, heightr;

	if (!tree)
		return (0);

	heightl = binary_tree_recur(tree->left);
	heightr = binary_tree_recur(tree->right);

	if (heightl == heightr)
	{

		if (tree->left == NULL && tree->right == NULL)
			return (1);

		if (tree->left != NULL && tree->right != NULL)
		{
			perfectl = binary_tree_is_perfect(tree->left);
			perfectr = binary_tree_is_perfect(tree->right);

			return (perfectl && perfectr);
		}

	}
	return (0);
}

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
