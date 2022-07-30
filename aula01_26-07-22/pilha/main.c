/*
Lucas Silva de Almeida

Descricao:
    Implementacao das funcoes basicas que uma pilha contem.
        - push;
        - pop;
        - empty;
        - stacktop;
*/

/******************************************************************************
                        Diretrizes pre-processamento
 ******************************************************************************/
#include <stdio.h>

#define STACKSMAXLENGTH 100

/******************************************************************************
                                   Structs
 ******************************************************************************/
typedef struct {
    int values[STACKSMAXLENGTH];
    int top;
} stack;

/******************************************************************************
                                   Funcoes
 ******************************************************************************/
int initializestack(stack *s) {
    s->top = -1;
    return 0;
}

int empty(stack *s) {
    return (s->top >= 0) ? 0 : 1;
}

int push(stack *s, int item) {
    if (s->top == STACKSMAXLENGTH - 1)
        return -1;
    s->values[++s->top] = item;
    return 0;
}

int pop(stack *s) {
    if (empty(s))
        printf("\n\nNao ha itens a serem removidos!\n\n");
    return s->values[s->top--];
}

int stacktop(stack *s) {
    if (empty(s))
        printf("\n\nA pilha esta vazia!\n\n");
    return s->values[s->top];
}

/******************************************************************************
                                Funcao Principal
 ******************************************************************************/
int main(void) {
    stack varstack;
    initializestack(&varstack);
    
    if (empty(&varstack))
        printf("Essa pilha esta vazia!\n");
    push(&varstack, 99);
    push(&varstack, 1198);
    push(&varstack, 230);
    push(&varstack, 48);
    printf("O topo da pilha e %d\n\n", stacktop(&varstack));
    printf("Removido o numero %d\n", pop(&varstack));
    printf("Removido o numero %d\n", pop(&varstack));
    printf("Removido o numero %d\n", pop(&varstack));
    printf("Removido o numero %d\n", pop(&varstack));
    pop(&varstack);

    getchar();

    return 0;
}
