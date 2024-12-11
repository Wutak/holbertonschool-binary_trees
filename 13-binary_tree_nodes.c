#include "binary_trees.h"

/**
 * binary_tree_nodes - amount of nodes in tree
 * @tree: pointer
 * Return: number of nodes with at least one child
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t n = 0;

	if (!tree)
		return (0);
	if (tree->left || tree->right)
		n++;
	n += binary_tree_nodes(tree->left);
	n += binary_tree_nodes(tree->right);
	return (n);
}
