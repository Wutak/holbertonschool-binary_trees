#include "binary_trees.h"

/**
 * binary_tree_insert_left  - insert left
 * @parent: parent
 * @value: value
 * Return: new
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new = malloc(sizeof(binary_tree_t));
	
	if (parent == NULL || value == '\0')
		return (NULL);

	new->n = value;
	new->parent = parent;
	new->left = NULL;
	new->right = NULL;
	if (parent->left != NULL)
	{
		new->left = parent->left;
		new->left->parent = new;
	}

	parent->left = new;
	return (new);
}
