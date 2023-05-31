#include "binary_trees.h"

/**
 *binary_tree_balance - function that measures the balance factor
 *of a binary tree
 *@tree: pointer to the root node of the tree to measure the balance factor
 *
 *Return: balance factor
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int bal, bar, res;

	if (!tree)
		return (0);

	bar = binary_height(tree->right);
	bal = binary_height(tree->left);
	res = bal - bar;

	return (res);
}

/**
 *binary_height - function that measures the height of tree
 *of a binary tree
 *@tree: pointer to the root node of the tree to measure the balance factor
 *
 *Return: height
 */
int binary_height(const binary_tree_t *tree)
{
	int height;

	if (!tree)
		return (1);

	height = binary_height_recur(tree) + 1;

	return (height);
}

/**
 *binary_height_recur - function that measures the height of tree
 *of a binary tree
 *@tree: pointer to the root node of the tree to measure the balance factor
 *
 *Return: height
 */
int binary_height_recur(const binary_tree_t *tree)
{
	int heigl, heigr;

	if (!tree)
		return (0);
	heigl = binary_height_recur(tree->left);
	heigr = binary_height_recur(tree->right);

	if (heigl > heigr)
		return (heigl + 1);

	return (heigr + 1);

}
