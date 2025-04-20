#include "binary_trees.h"

/**
 * binary_tree_height - measures height of a binary tree
 * @tree: pointer to the node to measure from
 * Return: height (number of steps to the deepest leaf)
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left, right;

	if (tree == NULL)
		return (0); /* empty tree has height 0 */

	left = binary_tree_height(tree->left);
	right = binary_tree_height(tree->right);

	return ((left > right ? left : right) + 1);
}
/**
 * binary_tree_balance - measures balance factor of a node
 * @tree: pointer to the node
 * Return: balance factor (left height - right height)
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return ((int)binary_tree_height(tree->left) -
	(int)binary_tree_height(tree->right));
}
