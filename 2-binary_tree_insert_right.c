#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts a node as the right-child of a node
 * @parent: pointer to the node to insert the right-child in
 * @value: value to store in the new_node
 * Return: pointer to the new node, NULL on Failure or parent NULL
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	if (parent == NULL)
		return (NULL);

	new_node = binary_tree_node(parent, value);

	if (new_node == NULL)
		return (NULL);

	if (parent->right != NULL)
	{
		new_node->right = parent->right;

		parent->right->parent = new_node;
	}

	parent->right = new_node;

	return (new_node);

}
