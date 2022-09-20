#ifndef _QUEUE_H
#define _QUEUE_H

#include <stdlib.h>

typedef struct queue {
    /*
    Estrutura de dados ordenada cuja a insercao ocorre em um extremidade somente
    e a remocao ocorre em outra. Respectivamente, fim da fila (rear) e inicio da
    fila (front)

    Caracteristicas:
        - Valores;
        - Tamanho;
        - Indice do inicio da fila;
        - Indice do fim da fila;
    
    Operacoes:
        - Criar fila;
        - Inserir valor;
        - Remover valor;
        - Verificar se esta vazia;
    */

    int *values;
    int length;
    int front, rear;
} queue;


queue *new_queue(int length);

int insert(queue *ptq, int value);

int remove(queue *ptq);

int is_empty(queue *ptq);
#endif
