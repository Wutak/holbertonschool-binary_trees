#include "binary_trees.h"

/**
 * binary_tree_leaves - counting leaves in tree
 * @tree: pointer
 * Return: amount of leaves
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t i = 0;

	if (!tree)
		return (0);
	if (!tree->left && !tree->right)
		i++;
	i += binary_tree_leaves(tree->left);
	i += binary_tree_leaves(tree->right);
	return (i);
}
