#include "binary_trees.h"
#include <stdio.h>
#include <stdlib.h>
/**
*binary_tree_height - binary tree
* @tree: tree
* Return: return
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
    size_t left_height;
    size_t right_height;

    if (tree == NULL)
    {
        return (0);
    }
    if (tree->left || tree->right)
    {
        left_height = binary_tree_height(tree->left);
        right_height = binary_tree_height(tree->right);
        return (1 + (left_height > right_height ? left_height : right_height));
    }
    return (0);
}