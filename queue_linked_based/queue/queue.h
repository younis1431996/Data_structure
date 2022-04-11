/*
 * queue.h
 *
 *  Created on: Apr 11, 2022
 *      Author: Hoda
 */

#ifndef QUEUE_H_
#define QUEUE_H_

/* inclusions */
#include <stdio.h>
#include <stdlib.h>

/* definitions */
#define MaxQueue 20
typedef int QueueEntry;

/* queue structure */
typedef struct queue{
	int front;
	int rear;
	int size;
	QueueEntry Entry[MaxQueue];
}Queue;

/* functions */
void create_queue(Queue *pq);

void Append(QueueEntry e, Queue *pq);

void Serve(QueueEntry *pe, Queue *pq);

int Queue_full(Queue *pq);

int Queue_empty(Queue *pq);

int Queue_size(Queue *pq);

void Clear_queue(Queue *pq);

void Traverse_queue(Queue *pq, void (*pf)(QueueEntry e));

#endif /* QUEUE_H_ */
