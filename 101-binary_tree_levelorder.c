#include "binary_trees.h"

/**
 *binary_tree_levelorder -function that goes through a
 *binary tree using level-order traversal
 *@tree: pointer to the root node of the tree to traverse
 *@func: pointer to a function to call for each node
 */
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree | !func)
		return;

	curr_height(tree, func);
}

/**
 *curr_height - function that is current height of tree
 *First height is determined then at every level (x) it will print
 *the nodes
 *
 *@tree: pointer to the root node of the tree to measure the height
 *@func: ptr to func call
 */
void curr_height(const binary_tree_t *tree, void (*func)(int))
{
	int height, x;

	height = binary_tree_recur(tree);

	for (x = 0; x <= height; x++)
	{
		print_nodes(tree, func, x);
	}
}

/**
 *print_nodes - function prints the nodes of the tree
 *Will print every node in the current height of the tree
 *
 *@tree: pointer to the root node of the tree to measure the height
 *@func: ptr to func call
 *@y: current height in the tree
 */
void print_nodes(const binary_tree_t *tree, void (*func)(int), int y)
{
	if (!tree)
		return;

	if (y == 0)
		func(tree->n);

	else if (y > 0)
	{
		print_nodes(tree->left, func, y - 1);
		print_nodes(tree->right, func, y - 1);
	}

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
