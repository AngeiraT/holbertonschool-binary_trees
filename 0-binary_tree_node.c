#include "binary_trees.h"

/**
 *
 *binary_tree_node - a function that creates a binary tree node
 *@parent: pointer to the parent node of the node to create
 *@value: value to put in the new node
 * Return: new node
 **/
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
    binary_tree_t *newnode = NULL;
    int n;

    /* allocate memory for newnode */
    newnode = malloc(sizeof(binary_tree_t));
    /* check if root empty */
    if (n == -1)
    {
        return NULL;
    }
    /* Store value n in newnode */
    newnode->parent = parent;
    newnode->n = value;
    newnode->left = NULL;
    newnode->right = NULL;
    return (newnode);

}
