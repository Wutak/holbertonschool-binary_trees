#include "binary_trees.h"

/**
 * binary_tree_delete - delete binary tree
 * @tree: pointer
 * Return: null
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
		return (NULL);

	binary_tree_delete(tree->left);
	binary_tree_delete(tree->right);
	free(tree);
}