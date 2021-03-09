#include "binary_trees.h"
#include <stdio.h>
#include <stdlib.h>
/**
*binary_tree_size - binary tree
* @tree: tree
* Return: return
*/
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t left_size = NULL, right_size = NULL, total_size = NULL;

	if (tree == NULL)
	{
		return (0);
	}

	if (tree->left)
		left_size = binary_tree_size(tree->left);
	if (tree->right)
		right_size = binary_tree_size(tree->right);

	total_size = (left_size + right_size + 1);

	return (total_size);
}
