#include "stack.h"

stack *new_stack(int len){
    stack *the_new_stack = (stack*)malloc(sizeof(stack));
    the_new_stack->length = len;
    the_new_stack->top = -1;
    the_new_stack->values = (int*)malloc(sizeof(int) * len);
    return the_new_stack;
}

int push(stack *pts, int value) {
    if (pts->top == pts->length - 1)
        return -1;
    pts->values[++pts->top] = value;
    return 0;
}

int pop(stack *pts) {
    if (is_empty(pts))
        return -1;
    return pts->values[pts->top--];
}

int is_empty(stack *pts) {
    return pts->top == -1 ? 1 : 0;
}

int stack_top(stack *pts) {
    if (is_empty(pts))
        return -1;
    return pts->values[pts->top];
}
