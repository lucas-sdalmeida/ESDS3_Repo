/*
Lucas Silva de Almeida

Enunciado:
    Implementar uma lista encadeada de inteiros com as seguintes funcoes:
        a. Inserir um elemento no início da lista.
        b. Buscar um elemento na lista, retornando o seu endereço.
        c. Apagar um elemento da lista passando o valor do elemento a ser apagado.
        d. Imprimir a lista.
        e. Ordenar a lista.
        f. Inserir um elemento em uma lista ordenada, mantendo sua ordenacao
*/


/******************************************************************************
                        Diretrizes Pre-Processamento
 ******************************************************************************/
#include <stdio.h>
#include <stdlib.h>


/******************************************************************************
                                   Estruturas
 ******************************************************************************/
typedef struct IntNode {
    struct Node *nextNode;
    int value;
    int ordered;
} IntNode, *IntList;


/******************************************************************************
                                    Funcoes
 ******************************************************************************/
int initializeList(IntList list) {
    list = (IntNode*)malloc(sizeof(IntNode));
    list->nextNode = NULL;
    list->value = NULL;
    return 0;
}

int isEmpty(IntList list) {
    return (list->nextNode == NULL) ? 1 : 0;
}

IntNode *searchElement(IntList list, int k) {
    if (isEmpty(list))
        return NULL;
    IntNode *node = list->nextNode;
    while (node && node->value != k)
        node = node->nextNode;
    return node;
}

int insertElement(IntList list, int k);

int removeElement(IntList list, int k);

int showList(IntList list);

int sortList(IntList list);


/******************************************************************************
                                Funcao Principal
 ******************************************************************************/
int main(void) {
    IntList list;
    
    initializeList(list);

    return 0;
}
