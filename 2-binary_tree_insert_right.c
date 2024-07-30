#include "binary_trees.h"
/**
 * binary_tree_insert_right - Inserts a node as the right-child
 * of another node.
 * @parent: Pointer to the node to insert the right-child in.
 * @value: Value to store in the new node.
 *
 * Return: Pointer to the created node,
 * or NULL on failure or if parent is NULL.
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *right_child;

	if (parent == NULL)
	{
		return (NULL);
	}

	right_child = malloc(sizeof(binary_tree_t));

	if (right_child == NULL)
	{
		return (NULL);
	}

	right_child->n = value;
	right_child->parent = parent;
	right_child->right = parent->right;
	right_child->left = NULL;

	if (parent->right != NULL)
	{
		parent->right->parent = right_child;
	}

	parent->right = right_child;

	return (right_child);
}
