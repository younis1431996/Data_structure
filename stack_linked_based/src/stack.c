/*
 * stack.c
 *
 *  Created on: Apr 10, 2022
 *      Author: Mahmoude Mohamed Younis
 */

/* inclusions */
#include "../stack/stack.h"

/* functions */
void create_stack(Stack *ps){
	// initialize first pointer in the stack to null.
	ps->top = NULL;
}

void push(StackEntry pe, Stack *ps){
	// create new node.
	StackNode *pn = (StackNode*)malloc(sizeof(StackNode));

	// store element to the entry of the new node
	pn->entry = pe;

	// the next pointer will point to last top.
	pn->next = ps->top;

	// new top.
	ps->top = pn;
}

void pop(StackEntry *pe, Stack *ps){
	// save last top.
	StackNode *pn;
	pn = ps->top;

	// element value equal to the entry of last top.
	*pe = ps->top->entry;

	// new top.
	ps->top = ps->top->next;

	// deallocate last top memory.
	free(pn);
}

int is_stack_empty(Stack *ps){
	return ps->top==NULL;
}

int is_stack_full(Stack *ps){
	return 0;
}

void clear_stack(Stack *ps){
	// store ADD. last top.
	StackNode *pn = ps->top;

	while(pn){
		pn = pn->next;
		free(ps->top);
		ps->top = pn;
	}
	ps->top = NULL;
}

void traverse_stack(Stack *ps, void (*pf) (StackEntry)){
	for(StackNode *pn=ps->top; pn; pn=pn->next)
		(*pf)(pn->entry);
}

int stack_size(Stack *ps){
	StackNode *pn = ps->top;
	int x;

	for(x=0; pn; pn=pn->next)
		x++;

	return x;

}
