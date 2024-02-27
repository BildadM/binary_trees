#include "binary_trees.h"

/**
 * binary_tree_size - Measures the size.
 * @tree: A pointer to the root node of the tree to measure the size of.
 *
 * Return: The size of the tree.
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t sizee = 0;

	if (tree)
	{
		sizee += 1;
		sizee += binary_tree_size(tree->left);
		sizee += binary_tree_size(tree->right);
	}
	return (sizee);
}
