#include "binary_trees.h"

/**
  * binary_tree_is_leaf - function that checks if a node is a leaf
  * @node: is a pointer to the node to check
  *
  * Return: 1 if node is a leaf, otherwise 0
  */

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);

	if (node->left == NULL && node->right == NULL)
		return (1);
	else
		return (0);
}

/**
  * binary_tree_is_full - function that checks if a binary tree is full
  * @tree: a pointer to the root node of the tree to check
  *
  * Return: 1 if binary tree is full
  */

int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (binary_tree_is_leaf(tree->left) && binary_tree_is_leaf(tree->right));
}
