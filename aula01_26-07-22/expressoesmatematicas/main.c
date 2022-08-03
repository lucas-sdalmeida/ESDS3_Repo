/*
Lucas Silva de Almeida

Enunciado:
    Programa que verifica a validade de expressões matemáticas usando pilha.
*/

/******************************************************************************
                        Diretrizes Pre-Processamento
 ******************************************************************************/
#include <stdio.h>
#include <stdlib.h>

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

int push(stack *pts, int value) {
    if (pts->top == STACKSMAXLENGTH - 1)
        exit(-1);
    pts->values[++pts->top] = value;
    return 0;
}

char pop(stack *pts) {
    if (empty(pts))
        exit(-2);
    return pts->values[pts->top--];
}

char stacktop(stack *pts) {
    if (empty(pts))
        exit(-2);
    return pts->values[pts->top];
}

int linha(char caract, short int tam) {
    int i=0;
    for (; i<tam; i++)
        putchar(caract);
    putchar(10);
    return 0;
}

int indexof(char *list, char character, int listlength) {
    int i = 0;
    for (; i<listlength; i++) {
        if (character == list[i])
            return i;
    }
    return -1;
}


/******************************************************************************
                                Funcao Principal 
 ******************************************************************************/
int main(void) {
    stack precedencesmarks;
    char expression[51], valida = 1; 
    char openingmarks[] = {'(', '[', '{'}, closingmarks[] = {')', ']', '}'}; 
    int i = 0, mark;

    initializestack(&precedencesmarks);

    linha('=', 60);
    puts("Digite uma expressao algebrica para verificar se ela e valida: ");
    linha('-', 30);
    printf("\t>>> ");
    fgets(expression, 51, stdin);
    linha('-', 60);
    do {
        if (indexof(openingmarks, expression[i], 3) > -1) {
            push(&precedencesmarks, expression[i]);
            i++;
            continue;
        }
        mark = indexof(closingmarks, expression[i], 3);
        if (mark > -1) {
            if (empty(&precedencesmarks)) {
                valida = 0;
                break;
            }
            if (indexof(openingmarks, stacktop(&precedencesmarks), 3) == mark)
                pop(&precedencesmarks);
        }
        i++;
    } while (expression[i]);
    if (!empty(&precedencesmarks))
        valida = 0;
    printf("A expressao digita e %s!\n", (valida) ? "VALIDA" : "INVALIDA");
    linha('=', 60);

    getchar();

    return 0;
}
