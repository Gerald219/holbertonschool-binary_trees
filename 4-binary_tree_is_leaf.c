#include "binary_trees.h"

/**
 * binary_tree_is_leaf - checks if a node is a leaf (no children)
 * @node: pointer to the node to check
 * Return: 1 if it's a leaf, 0 if not or if node is NULL
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);

	if (node->left == NULL && node->right == NULL)
		return (1);
	return (0);
}
