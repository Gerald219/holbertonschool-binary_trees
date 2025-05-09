#include "binary_trees.h"

/**
 * binary_tree_sibling - finds the sibling of a node
 * @node: pointer to the node to find sibling for
 * Return: pointer to sibling, or NULL
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);

	/* If this node is the left child, return the right */
	if (node->parent->left == node)
		return (node->parent->right);

	/* If this node is the right child, return the left */
	if (node->parent->right == node)
		return (node->parent->left);

	return (NULL);
}
