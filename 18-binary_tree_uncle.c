#include "binary_trees.h"

/**
 *binary_tree_uncle -function that finds the uncle of a node
 *@node: pointer to the node to find the uncle
 *
 *Return: pointer to the uncle node
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *uncle;

	if (!node || !(node->parent))
		return (NULL);

	uncle = binary_check_uncle(node->parent);

	return (uncle);
}

/**
 *binary_check_uncle -function that finds the uncle of a node
 *@node: pointer to the node to find the uncle
 *
 *Return: pointer to the uncle node
 *similar func to find a sibling node
 */
binary_tree_t *binary_check_uncle(binary_tree_t *node)
{
	if (!node || !(node->parent))
		return (NULL);

	if (node->parent->left == node)
		return (node->parent->right);

	else
		return (node->parent->left);
}
