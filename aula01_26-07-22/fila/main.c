/*
Lucas Silva de Almeida

Enunciado:
    Exercício de implementação das funções de uma fila.
*/

/******************************************************************************
                          Diretrizes Pre-Processamento
 ******************************************************************************/
#include <stdio.h>

#define QUEUEMAXLENGTH 100


/*****************************************************************************
                                    Structs
 *****************************************************************************/
typedef struct {
    int items[QUEUEMAXLENGTH];
    int front, rear;
} queue;


/****************************************************************************
                                    Funcoes
 ****************************************************************************/
int initializequeue(queue *ptq) {
    ptq->front = -1;
    ptq->rear = -1;
    return 0;
}

int emptyq(queue *ptq) {
    return (ptq->front == -1 && ptq->rear == -1) ? 1 : 0;
}

int insertq(queue *ptq, int x) {
    if (ptq->rear == QUEUEMAXLENGTH - 1) {
        if (ptq->front == 0)
            return -1;
        ptq->rear = -1;
    }
    if (ptq->front == -1)
        ptq->front = 0;
    ptq->items[++ptq->rear] = x;
    return 0;
}

int removeq(queue *ptq) {
    if (emptyq(ptq))
        return -1;
    int x = ptq->items[ptq->front++];
    if (ptq->front == QUEUEMAXLENGTH - 1) {
        ptq->front = 0;
        if (ptq->rear == QUEUEMAXLENGTH -1)
            initializequeue(ptq);
    }
    if (ptq->front == ptq->rear + 1)
        initializequeue(ptq);
    return x;
}


/****************************************************************************
                                 Funcao Principal
 ****************************************************************************/
int main(void) {
    queue q;

    initializequeue(&q);

    if (emptyq(&q))
        printf("A fila esta vazia! Vai agora.\n");
    insertq(&q, 1);
    insertq(&q, 2);
    insertq(&q, 3);
    insertq(&q, 4);
    printf("Removido o numero: %d -- front = %d; rear = %d\n", removeq(&q), q.front, q.rear);
    printf("Removido o numero: %d -- front = %d; rear = %d\n", removeq(&q), q.front, q.rear);
    printf("Removido o numero: %d -- front = %d; rear = %d\n", removeq(&q), q.front, q.rear);
    printf("Removido o numero: %d -- front = %d; rear = %d\n", removeq(&q), q.front, q.rear);
    insertq(&q, 5);
    printf("front: %d; rear: %d\n", q.front, q.rear);
    insertq(&q, 6);
    printf("front: %d; rear: %d\n", q.front, q.rear);
    
    getchar();

    return 0;
}
