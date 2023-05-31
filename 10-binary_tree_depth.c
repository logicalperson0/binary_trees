#include "binary_trees.h"

/**
 *binary_tree_recur - function that recursively the binary tree
 *@tree: pointer to the root node of the tree to measure the depth
 *
 *Return: height of the tree
 */
size_t binary_tree_recur(const binary_tree_t *tree)
{
	int deptht;

	if (tree == NULL)
		return (0);

	else
	{
		deptht = binary_tree_recur(tree->parent) + 1;

		return (deptht);
	}

}

/**
 *binary_tree_depth - function that measures the depth of a binary tree
 *@tree: pointer to the root node of the tree to measure the height
 *
 *Return: depth of the tree
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	int depth;

	if (!tree)
		return (0);

	depth = binary_tree_recur(tree) - 1;

	return (depth);
}
