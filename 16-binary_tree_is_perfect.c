#include "binary_trees.h"
/**
 * binary_tree_height - Measures the height of a binary tree.
 * @tree: Pointer to the root node of the tree to measure the height.
 *
 * Return: Height of a binary tree in number.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height, right_height;

	if (tree == NULL)
		return (0);

	left_height = binary_tree_height((*tree).left);
	right_height = binary_tree_height((*tree).right);

	if (right_height > left_height)
		return (right_height + 1);
	return (left_height + 1);
}
/**
 * binary_tree_is_perfect - Checks if a binary tree is perfect.
 * @tree: Pointer to the root node of the tree to check.
 *
 * Return: 1 on (Success), otherwise 1 on (Failure).
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int lperfect, rperfect;

	if (tree == NULL)
		return (0);

	lperfect = binary_tree_height(tree->left);
	rperfect = binary_tree_height(tree->right);

	if (lperfect > rperfect || lperfect < rperfect)
		return (0);
	if (lperfect == rperfect)
		return (1);
	return (lperfect);
}
