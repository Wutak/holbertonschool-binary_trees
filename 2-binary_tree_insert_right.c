#include "binary_trees.h"

/**
 * binary_tree_insert_right - insert right
 * @parent: parent
 * @value: value
 * Return: new
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value);
{
	binary_tree_t *new = malloc(sizeof(binary_tree_t));

	if (new == NULL || value == '\0')
		return (NULL);

	new->n = value;
	new->parent = parent;
	new->left = NULL;
	new->right = NULL;
	if (parent->right == NULL)
	{
		new->right = parent->right;
		new->right->parent = new;
	}

	parent->right = new;
	return (new);
}
