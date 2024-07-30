#include "binary_trees.h"
/**
 * binary_tree_is_root - Checks if a given node is a root.
 * @node: Pointer to the node to check.
 *
 * Return:1 if node is a root, otherwise 0.
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);
	binary_tree_is_root(node->left);
	binary_tree_is_root(node->right);

	if (node->left != NULL && node->right != NULL)
		return (1);
	else
		return (0);
}
