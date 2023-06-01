#include "binary_trees.h"

/**
 *binary_trees_ancestor -function that finds the lowest common ancestor
 *of two nodes
 *@first: pointer to the first node
 *@second: pointer to the 2nd node
 *
 *Return: pointer to the lowest common ancestor node
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
									const binary_tree_t *second)
{
	if (!first || !second)
		return (NULL);

	if (first == second)
		return ((binary_tree_t *)(first));

	if (binary_tree_depth(first) > binary_tree_depth(second))
		return (binary_trees_ancestor(first->parent, second));

	/*if (binary_tree_depth(first) < binary_tree_depth(second))*/
	return (binary_trees_ancestor(first, second->parent));

}

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
		deptht = binary_tree_recur(tree->parent);

		return (deptht + 1);
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
