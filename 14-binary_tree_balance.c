#include "binary_trees.h"

/**
 * binary_tree_balance - tree balance
 * @tree: pointer
 * Return: diff
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	size_t left_height = 0; right_height = 0;

	if (!tree)
		return (0);

	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);
	return (left_height - right_height);
}

/**
 * binary_tree_height - calculate height
 * @tree: pointer
 * Return: left or right
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_size = 0;
	size_t right_size = 0;

	if (!tree)
		return (0);

	left_size += 1 + binary_tree_height(tree-.left);
	right_size += 1 + binary_tree_height(tree->right);
	if (left_size > right_size)
		return (left_size);
	return (right_size);
}
