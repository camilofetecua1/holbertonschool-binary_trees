#include "binary_trees.h"

/**
*binary_tree_is_leaf - this function verify that the node is or isn't  leaf
*@node: this is a pointer to node
*
*return: 1 if the node is a leaf or 0 if the node isn't
*/

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);
	if (node->left != NULL || node->right != NULL)
		return (0);
	return (1);
}
