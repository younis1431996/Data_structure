#ifndef STACK_H_
#define STACK_H_

/* inclusions */
#include <stdio.h>
#include <stdlib.h>

/* definitions */
#define MAXSTACK 100
typedef int StackEntry;

/* stack structure */
typedef struct stack{
    int top;
    StackEntry entry[MAXSTACK];
}Stack;

/* functions */
/* (1) */ void create_stack(Stack *ps);

/* (2) */ void push(StackEntry e,Stack *ps);

/* (3) */ int stack_Full(Stack *ps);

/* (4) */ void pop(StackEntry *pe, Stack *ps);

/* (5) */ int stack_empty(Stack *ps);

/* (6) */ int stack_size(Stack *ps);

/* (7) */ void stack_top(Stack *ps, StackEntry *pe);

/* (8) */ void clear_stack(Stack *ps);

/* (9) */ void traverse_stack(Stack *ps, void (*pf)(StackEntry e));      

#endif /* STACK_H_*/