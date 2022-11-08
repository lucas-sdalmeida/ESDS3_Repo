#include <stdio.h>
#include <stdlib.h>

typedef struct Int_Tree_Node {
    int data;
    struct Int_Tree_Node *parent;
    struct Int_Tree_Node *left_child;
    struct Int_Tree_Node *right_child;
} Int_Tree_Node, *Int_Tree;

Int_Tree_Node *new_int_tree_node(int value);

Int_Tree *new_int_tree(void);

Int_Tree_Node *find_Node(Int_Tree *tree, int value);

int del_int_tree_node(Int_Tree_Node *node);

int del_int_tree(Int_Tree *tree);


typedef struct Int_Tree_Stack {
    Int_Tree_Node *node;
    struct Int_Tree_Stack *top;
} Int_Tree_Stack;

Int_Tree_Stack *new_int_tree_stack(void);

int is_empty_int_tree_stack(Int_Tree_Stack *stack);

int int_tree_stack_push(Int_Tree_Stack *stack, Int_Tree_Node *node);

Int_Tree_Node *int_tree_stack_pop(Int_Tree_Stack *stack);

Int_Tree_Node *int_tree_stack_top(Int_Tree_Stack *stack);

int del_int_tree_stack(Int_Tree_Stack *stack);


int main(void) {
    return 0;
}

Int_Tree_Node *new_int_tree_node(int value) {
    Int_Tree_Node *new_node = (Int_Tree_Node*)malloc(sizeof(Int_Tree_Node));

    if (!new_node)
        return 0;

    new_node->data = value;
    new_node->parent = NULL;
    new_node->left_child = NULL;
    new_node->right_child = NULL;

    return new_node;
}

Int_Tree *new_int_tree(void) {
    Int_Tree *new_tree = (Int_Tree*)malloc(sizeof(Int_Tree*));

    if (!new_tree)
        return NULL;
    
    *new_tree = NULL;

    return new_tree;
}

Int_Tree_Node *find_Node(Int_Tree *tree, int value) {
    if (!tree || !(*tree))
        return NULL;
}

int del_int_tree_node(Int_Tree_Node *node) {

}

int del_int_tree(Int_Tree *tree) {

}

Int_Tree_Stack *new_int_tree_stack(void) {
    Int_Tree_Stack *new_stack = (Int_Tree_Stack*)malloc(sizeof(Int_Tree_Stack));

    if (!new_stack)
        return NULL;
    
    new_stack->node = NULL;
    new_stack->top = NULL;

    return new_stack;
}

int is_empty_int_tree_stack(Int_Tree_Stack *stack) {
    if (!stack)
        return 1;
    if (!stack->top)
        return 1;
    return 0;
}

int int_tree_stack_push(Int_Tree_Stack *stack, Int_Tree_Node *node) {
    if (!stack)
        return -1;
    if (!node)
        return -2;
    
    Int_Tree_Stack *new_top = new_int_tree_stack();
    new_top->node = node;
    new_top->top = stack->top;
    stack->top = new_top;

    return 0;
}

Int_Tree_Node *int_tree_stack_pop(Int_Tree_Stack *stack) {
    if (is_empty_int_tree_stack(stack))
        return NULL;
    
    Int_Tree_Stack *stack_top = stack->top;
    Int_Tree_Node *tree_node = stack_top->node;

    stack->top = stack_top->top;
    stack_top->top = NULL;
    del_int_tree_stack(stack);

    return tree_node;
}

Int_Tree_Node *int_tree_stack_top(Int_Tree_Stack *stack) {
    if (is_empty_int_tree_stack(stack))
        return NULL;
    
    return stack->top->node;
}

int del_int_tree_stack(Int_Tree_Stack *stack) {
    if (!stack)
        return 1;

    Int_Tree_Stack *stack_top = stack->top;

    while (stack) {
        free(stack);
        stack = stack_top;
        if (stack)
            stack_top = stack->top;
    }

    return 0;
}
