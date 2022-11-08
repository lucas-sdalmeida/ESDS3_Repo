#include "int_tree.h"

Int_Tree_Node *new_int_tree_node(int value) {
    Int_Tree_Node *new_node = (Int_Tree_Node*)malloc(sizeof(Int_Tree));

    if (!new_node)
        return NULL;

    new_node->value = value;
    new_node->parent = NULL;
    new_node->left_child = NULL;
    new_node->right_child = NULL;

    return new_node;
}

Int_Tree *new_int_tree(void) {
    Int_Tree *new_tree = (Int_Tree*)malloc(sizeof(Int_Tree));

    if (!new_tree)
        return NULL;
    
    *new_tree = NULL;

    return new_tree;
}

Int_Tree_Node *add_node(Int_Tree *tree, int value) {
    if (!tree || !(*tree))
        return NULL;
}

Int_Tree_Node *find_node(Int_Tree *tree, int value) {
    if (!tree || !(*tree))
        return NULL;

    Int_Tree_Node *root = *tree;

    if (root->value == value)
        return root;
    
    Int_Tree_Node *node = find_node(&root->left_child, value);

    if (node)
        return node;
    return find_node(&root->right_child, value);
}

int del_int_tree_node(Int_Tree_Node *node) {
    if (!node)
        return 1;
    
    free(node);

    return 0;
}

int del_int_tree(Int_Tree *tree) {
    if (!tree || !(*tree))
        return 1;

    Int_Tree_Node *root = *tree;

    del_int_tree(&root->left_child);
    del_int_tree(&root->right_child);
    del_int_tree_node(root);

    return 0;
}
