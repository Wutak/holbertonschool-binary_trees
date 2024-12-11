#include "binary_trees.h"

/**
 * binary_tree_inorder - inorder tree
 * @tree: pointer
 * @func: function
 * Return: Nothing
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;

	binary_tree_inorder(tree->left, func);
	func(tree->n);
	binary_tree_inordere(tree->right, func);
}
