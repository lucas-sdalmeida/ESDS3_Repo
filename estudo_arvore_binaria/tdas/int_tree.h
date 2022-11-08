#ifndef _INT_TREE_H
#define _INT_TREE_H

#include <stdlib.h>

typedef struct Int_Tree_Node {
    int value;
    struct Int_Tree_Node *parent;
    struct Int_Tree_Node *left_child;
    struct Int_Tree_Node *right_child;
} Int_Tree_Node, *Int_Tree;

Int_Tree_Node *new_int_tree_node(int value);

Int_Tree *new_int_tree(void);

Int_Tree_Node *add_node(Int_Tree *tree, int value);

Int_Tree_Node *find_node(Int_Tree *tree, int value);

int del_int_tree_node(Int_Tree_Node *node);

int del_int_tree(Int_Tree *tree);

#endif