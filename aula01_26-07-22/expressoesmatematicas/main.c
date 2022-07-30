/*
Lucas Silva de Almeida

Enunciado:
    Programa que verifica a validade de expressões matemáticas usando pilha.
*/

/******************************************************************************
                        Diretrizes Pre-Processamento
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
int initializestack(stack *pts) {
    pts->top = -1;
    return 0;
}

int empty(stack *pts) {
    return (pts->top >= 0) ? 0 : 1;
}


/******************************************************************************
                                Funcao Principal 
 ******************************************************************************/
int main(void) {
    return 0;
}
