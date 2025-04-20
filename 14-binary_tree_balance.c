#include "binary_trees.h"

/**
 * binary_tree_height - returns the height of a binary tree
 * @tree: pointer to the root node of the subtree
 * Return: height (number of steps to the deepest leaf)
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left = 0, right = 0;

	if (tree == NULL)
		return (0);

	if (tree->left)
		left = 1 + binary_tree_height(tree->left);

	if (tree->right)
		right = 1 + binary_tree_height(tree->right);

	return (left > right ? left : right);
}

/**
 * binary_tree_balance - gets the balance factor of a binary tree node
 * @tree: pointer to the node to check
 * Return: balance factor = height of left - height of right
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return ((int)binary_tree_height(tree->left) - (int)binary_tree_height(tree->right));
}
