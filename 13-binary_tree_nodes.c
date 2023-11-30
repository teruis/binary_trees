#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_nodes - Counts nodes with at least one child in a binary tree
 * @tree: A pointer to the root node of the tree to count nodes
 *
 * Return: The number of nodes with at least one child,
 *         or 0 if tree is NULL
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
    if (tree == NULL)
        return 0;

    // If it has at least one child, count this node too
    if (tree->left != NULL || tree->right != NULL)
        return 1 + binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right);
    
    // If it has no children, continue counting in its subtrees
    return binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right);
}
