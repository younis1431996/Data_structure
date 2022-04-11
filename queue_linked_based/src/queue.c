/*
 * queue.c
 *
 *  Created on: Apr 11, 2022
 *      Author: Mahmoud Mohamed Younis
 */
#include "../queue/queue.h"

void create_queue(Queue *pq){
	pq->front =  NULL;
	pq->rear  = NULL;
	pq->size  =  0;
}

void Append(QueueEntry e, Queue *pq){
	QueueNode *pn = (QueueNode*) malloc(sizeof(QueueNode));
	pn->next = NULL;
	pn->entry = e;
	if(!pq->rear)
		pq->front = pn;
	else
		pq->rear->next = pn;
	pq->rear = pn;
	pq->size++;
}

void Serve(QueueEntry *pe, Queue *pq){
	QueueNode *pn = pq->front;
	*pe = pn->entry;
	pq->front = pq->front->next;
	free(pn);
	if(!pq->front)
		pq->rear = NULL;
	pq->size--;
}

int Queue_full(Queue *pq){
	return 0;
}

int Queue_empty(Queue *pq){
	return !(pq->size);
}

int Queue_size(Queue *pq){
	return pq->size;
}

void Clear_queue(Queue *pq){
	while(pq->front){
		pq->rear = pq->front->next;
		free(pq->front);
		pq->front = pq->rear;
	}
	pq->size = 0;
}

void Traverse_queue(Queue *pq, void (*pf)(QueueEntry e)){
	for(QueueNode *pn = pq->front; pn; pn=pn->next){
		(*pf)(pn->entry);
	}
}
