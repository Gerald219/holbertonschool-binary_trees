#include "binary_trees.h"

/**
 * binary_tree_height - finds the height of a tree
 * @tree: pointer to node
 * Return: height
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left = 0, right = 0;

	if (!tree)
		return (0);

	if (tree->left)
		left = 1 + binary_tree_height(tree->left);
	if (tree->right)
		right = 1 + binary_tree_height(tree->right);

	return (left > right ? left : right);
}

/**
 * binary_tree_is_perfect - checks if tree is perfect
 * @tree: pointer to root
 * Return: 1 if perfect, 0 if not
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int l_height, r_height;
	int left_perfect, right_perfect;

	if (!tree)
		return (0);

	/* if it's a leaf */
	if (!tree->left && !tree->right)
		return (1);

	/* if both children exist */
	if (tree->left && tree->right)
	{
		l_height = binary_tree_height(tree->left);
		r_height = binary_tree_height(tree->right);

		if (l_height != r_height)
			return (0);

		left_perfect = binary_tree_is_perfect(tree->left);
		right_perfect = binary_tree_is_perfect(tree->right);

		return (left_perfect && right_perfect);
	}

	/* if only one child exists */
	return (0);
}
