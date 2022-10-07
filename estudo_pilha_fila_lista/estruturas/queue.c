#include "queue.h"

queue *new_queue(int len) {
    queue *the_new_queue = (queue*)malloc(sizeof(queue));
    the_new_queue->values = (int*)malloc(sizeof(int) * len);
    the_new_queue->length = len;
    the_new_queue->front = -1;
    the_new_queue->rear = 0;
    return the_new_queue;
}

int insert(queue *ptq, int value) {
    if (ptq->rear == ptq->front)
        return -1;
    if (ptq->rear == ptq->length - 1) {
        if (ptq->front == 0)
            return -1;
        ptq->rear = -1;
    }
    ptq->values[ptq->rear++] = value;
    return 0;
}

int remove(queue *ptq) {
    if (is_empty(ptq))
        return -1;
    return ptq->values[++ptq->front];
}

int is_empty(queue *ptq) {
    if (ptq->rear == ptq->front - 1)
}

int destroy_queue(queue *ptq);


