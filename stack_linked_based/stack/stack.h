/*
 * stack.h
 *
 *  Created on: Apr 10, 2022
 *      Author: Mahmoude Mohamed Younis
 */

#ifndef STACK_H_
#define STACK_H_

/* inclusions */
#include <stdio.h>
#include <stdlib.h>

/* definitions */
typedef int StackEntry;

/* structures */
typedef struct stacknode{
	StackEntry entry;
	struct stacknode *next;
}StackNode;

typedef struct stack{
	StackNode *top;
}Stack;

/* functions */
void create_stack(Stack *ps);

void push(StackEntry pe, Stack *ps);

void pop(StackEntry *pe, Stack *ps);

int is_stack_empty(Stack *ps);

int is_stack_full(Stack *ps);

void clear_stack(Stack *ps);

void traverse_stack(Stack *ps, void (*pf) (StackEntry));

int stack_size(Stack *ps);
#endif /* STACK_H_ */
