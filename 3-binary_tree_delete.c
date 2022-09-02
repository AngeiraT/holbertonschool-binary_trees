#include "binary_trees.h"
/**
 * binary_tree_delete - Deletes and frees a tree
 * @tree: Pointer to trees' root
 */

void binary_tree_delete(binary_tree_t *tree)
{
    if(tree) /* if tree is a exist */
    {
        binary_tree_delete(tree->left); /* delete left node*/ 
        binary_tree_delete(tree->right); /* delete right node*/
    free(tree); /* free whole tree */
    }
}
