#include "binary_trees.h"

/**
 * binary_tree_is_full - checks if a binary tree is full
 * @tree: pointer to the root node
 * Return: 1 if full, 0 if not
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	/* Leaf node is full */
	if (tree->left == NULL && tree->right == NULL)
		return (1);

	/* If both children exist, check them too */
	if (tree->left && tree->right)
		return (binary_tree_is_full(tree->left) &&
			binary_tree_is_full(tree->right));

	/* If only one child exists → not full */
	return (0);
}
