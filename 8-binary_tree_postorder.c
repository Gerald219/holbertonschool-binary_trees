#include "binary_trees.h"

/**
 * binary_tree_postorder - goes through tree in post-order traversal
 * @tree: pointer to the root node
 * @func: function to call on each nodes value
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}
