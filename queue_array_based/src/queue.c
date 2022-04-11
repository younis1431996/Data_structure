/*
 * queue.c
 *
 *  Created on: Apr 11, 2022
 *      Author: Mahmoud Mohamed Younis
 */
#include "../queue/queue.h"

void create_queue(Queue *pq){
	pq->front =  0;
	pq->rear  = -1;
	pq->size  =  0;
}

void Append(QueueEntry e, Queue *pq){
	pq->rear = (pq->rear + 1) % MaxQueue;
	pq->Entry[pq->rear] = e;
	pq->size++;
}

void Serve(QueueEntry *pe, Queue *pq){
	*pe = pq->Entry[pq->front];
	pq->front = (pq->front + 1) % MaxQueue;
	pq->size--;
}

int Queue_full(Queue *pq){
	return (pq->size==MaxQueue);
}

int Queue_empty(Queue *pq){
	return !(pq->size);
}

int Queue_size(Queue *pq){
	return pq->size;
}

void Clear_queue(Queue *pq){
	pq->front =  0;
	pq->rear  = -1;
	pq->size  =  0;
}

void Traverse_queue(Queue *pq, void (*pf)(QueueEntry e)){
	for(int pos=pq->front, s=0; s<pq->size; s++){
		(*pf)(pq->Entry[pos]);
		pos = (pos+1)%MaxQueue;
	}
}
