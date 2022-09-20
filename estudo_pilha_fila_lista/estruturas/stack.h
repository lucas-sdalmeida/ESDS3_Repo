#ifndef _STACK_H
#define _STACK_H

#include <stdlib.h>
#include <math.h>

typedef struct stack {
    /*
    Conjunto ordenado de itens no qual insercoes e remocoes so podem ser reali-
    zadas em uma das extremidades. Tal extremidade e denominada "topo" da pilha.
    
    Operacoes:
        - Criar pilha;
        - Adicionar item;
        - Remover item, retornando-o
        - Verificar se esta vazia;
        - Obter o valor no topo da pilha sem remove-lo;
    */
    int *values;
    int length;
    int top;
} stack;

stack *new_stack(int len);

int push(stack *pts, int value);

int pop(stack *pts);

int is_empty(stack *pts);

int stack_top(stack *pts);

#endif
