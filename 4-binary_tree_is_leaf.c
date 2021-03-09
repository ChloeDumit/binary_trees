#include "binary_trees.h"
/**
*binary_tree_is_leaf - binary tree
* @node: tree
* Return: return
*/
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
	{
		return (0);
	}

	if (node->left != NULL || node->right != NULL)
	{
		return (0);
	}
	return (1);

}
