#include "binary_trees.h"

/**
 * binary_tree_node - Creates a binary tree node.
 * @parent: A pointer to the parent of the node to create.
 * @value: The value to put in the new node.
 *
 * Return: If an error occurs - NULL.
 *         Otherwise - a pointer to the new node.
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *nice;

	nice = malloc(sizeof(binary_tree_t));
	if (nice == NULL)
		return (NULL);

	nice->n = value;
	nice->parent = parent;
	nice->left = NULL;
	nice->right = NULL;

	return (nice);
}
