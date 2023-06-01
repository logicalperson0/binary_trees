#include "binary_trees.h"

/**
 *binary_tree_is_complete - function that checks if a binary tree is complete
 *@tree: pointer to the root node of the tree to check
 *
 *Return: 1 for complete, 0 otherwise
 */
int binary_tree_is_complete(const binary_tree_t *tree)
{
	int numnodes, x = 0, res;

	if (!tree)
		return (0);

	numnodes = count_nodes(tree);

	res = complete_binary(tree, numnodes, x);

	return (res);
}

/**
 *count_nodes - counts the nodes of the tree
 *@tree: ptr to root node
 *
 *Return: num of nodes
 */
int count_nodes(const binary_tree_t *tree)
{
	int l, r;

	if (!tree)
		return (0);

	l = count_nodes(tree->left);
	r = count_nodes(tree->right);

	return (l + r + 1);
}

/**
 *complete_binary - the complete tree or not
 *Checks this by having: 2*index + 1(left),
 *2*index + 2 (right) can get this node if tree is complete
 *otherwise 0 is gotten, empty tree is complete
 *
 *@tree: ptr to root node
 *@numnodes: num of nodes in the tree
 *@y: index to find node in the tree
 *
 *Return: num of nodes
 */
int complete_binary(const binary_tree_t *tree, int numnodes, int y)
{
	int lcom, rcom;

	if (!tree)
		return (1);

	if (y >= numnodes)
		return (0);

	lcom = complete_binary(tree->left, numnodes, (2 * y) + 1);
	rcom = complete_binary(tree->right, numnodes, (2 * y) + 2);

	return (lcom && rcom);
}
