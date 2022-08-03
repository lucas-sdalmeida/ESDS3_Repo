/*
Lucas Silva de Almeida

Enunciado:
    Altere a implementação da pilha para que ela possa ser inicializada com um tamanho
    máximo determinado pelo usuário. Para isso, crie uma função de inicialização com o
    seguinte protótipo e a seguinte estrutura:
        
        struct stack *createStack(int max);
        
        struct stack {
            int max;
            int top;
            int *items;
        }
*/

/******************************************************************************
                        Diretrizes de Pre-Processamento
 ******************************************************************************/
#include <stdio.h>
#include <stdlib.h>


/******************************************************************************
                                    Structs
 ******************************************************************************/
typedef struct {
    int max;
    int top;
    int *items;
} stack;


/******************************************************************************
                                    Funcoes 
 ******************************************************************************/
stack createstack(int max);

int empty(stack *pts);

int push(stack *pts, int item);

int pop(stack *pts);

int stacktop(stack *pts);


/******************************************************************************
                                Funcao Principal 
 ******************************************************************************/
int main(void) {
    return 0;
}
