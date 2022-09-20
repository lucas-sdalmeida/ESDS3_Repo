/*
Lucas Silva de Almeida

Descrição:
    Arquivo para estudo e teste das estruturas de dado: pilha, fila e lista en-
    cadeada.
*/

/******************************************************************************
                        Diretrizes Pre-Processamento
 ******************************************************************************/
#include <stdio.h>
#include <stdlib.h>

#include "estruturas\lists.c"
#include "estruturas\queue.c"
#include "estruturas\stack.c"

#define STACK_MAX_LENGTH 100

/******************************************************************************
                                    Funcoes 
 ******************************************************************************/


/******************************************************************************
                                Funcao Principal 
 ******************************************************************************/
int main() {
    stack *s = new_stack(STACK_MAX_LENGTH);

    printf("pilha vazia? %d\n", is_empty(s));

    int i = 0;
    for (; i<10; i++)
        push(s, i);

    printf("pilha vazia? %d\n", is_empty(s));
    puts("Elementos:");

    for (i=0; i<10; i++)
        printf("\t%d\n", pop(s));
    
    printf("pilha vazia? %d\n", is_empty(s));
    push(s, 100);
    printf("stack top: %d\n", stack_top(s));
    printf("pilha vazia? %d\n", is_empty(s));

    getchar();

    return 0;
}
