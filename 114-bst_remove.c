#include "binary_trees.h"
/**
 * bst_remove - remove for the node from a binary search tree.
 * @root: The pointer to the root node tree.
 * @value: the value of the node to remove.
 *
 * Return: a pointer with the given value
 *         Otherwise NULL.
 */
bst_t *bst_remove(bst_t *root, int value)
{
	if (!root)
		return (NULL);

	if (value == root->n)
		return ((bst_t *)root);

	if (value < root->n)
		return (bst_remove(root->left, value));
	else
		return (bst_remove(root->right, value));
}
