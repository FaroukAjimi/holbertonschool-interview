#include <stdlib.h>
#include <limits.h>
#include <stdio.h>
#include "binary_trees.h"
/**
 * bst_h - function to determine max side
 * @tree: tree to check
 * @min: it's min
 * @max: tree max
 * Return: int
 */
int bst_h(const binary_tree_t *tree, int min, int max)
{
if (!tree)
return (1);
if (tree->n < min || tree->n > max)
return (0);
return (bst_h(tree->left, min, tree->n - 1) &&
bst_h(tree->right, tree->n + 1, max));
}
/**
 * bst - function bst
 * @tree: go
 * Return: int
 */
int bst(const binary_tree_t *tree)
{
return (bst_h(tree, INT_MIN, INT_MAX));
}
/**
 * max - determine max
 * @x: side x
 * @y: side y
 * Return: max
 */
int max(int x, int y)
{
return ((x >= y) ? x : y);
}
/**
 * height - height of tree
 * @tree: tree to mesure
 * Return: height
 */
int height(const binary_tree_t *tree)
{
if (tree == NULL)
return (0);
return (1 + max(height(tree->left), height(tree->right)));
}
/**
 * binary_tree_is_avl - main function
 *@tree: tree to check
 * Return: A pointer to the created tree
 */
int binary_tree_is_avl(const binary_tree_t *tree)
{
int lh;
int rh;
if (tree == NULL)
return (1);
if (!bst(tree))
  return(0);
if (bst(tree))
{
lh = height(tree->left);
rh = height(tree->right);
if (abs(lh - rh) <= 1 && binary_tree_is_avl(tree->left) &&
binary_tree_is_avl(tree->right))
return (1);
}
return (0);
}
