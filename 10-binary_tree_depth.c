#include "binary_trees.h"
#include <stdio.h>
#include <stdlib.h>
/**
*binary_tree_height - binary tree
* @tree: tree
* Return: return
*/
size_t binary_tree_depth(const binary_tree_t *tree)
{
    if (tree == NULL)
    {
        return (0);
    }

    if (tree->parent)
    {
        return (binary_tree_depth(tree->parent) + 1);
    }
    return (0);
}
    
