#include "binary_trees.h"
/**
 * binary_tree_depth - Measures the depth of a node in a binary tree.
 * @tree: Pointer to the node to measure the depth.
 *
* Return: Depth of a node in a binary tree.
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	if ((*tree).parent == NULL)
		return (0);
	return (binary_tree_depth((*tree).parent) + 1);
}
