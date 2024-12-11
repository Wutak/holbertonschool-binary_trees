#include "binary_trees.h"

/**
 * binary_tree_height - height of tree
 * @tree: pointer
 * Return: left or right
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t size_l = 0;
	size_t size_r = 0;

	if(!tree)
		return (0);

	if (tree->left)
		size_l += 1 + binary_tree_height(tree->left);
	if (tree->right)
		size_r += 1 + binary_tree_height(tree->right);

	if (size_l > size_r)
		return (size_l);
	else
		return(size_r);
}
