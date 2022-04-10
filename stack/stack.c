/* inclusions */
#include "stack.h"

/* functions */
void create_stack(Stack *ps){
    ps->top = 0;
}

/************************************************************/
void push(StackEntry e,Stack *ps){
    ps->entry[ps->top++] = e;
}

int stack_Full(Stack *ps){
    return (ps->top >= MAXSTACK);
}
/*************************************************************/
void pop(StackEntry *pe, Stack *ps){
    *pe = ps->entry[--ps->top];
}

int stack_empty(Stack *ps){
    return (ps->top <= MAXSTACK); 
}
/**************************************************************/
void stack_top(Stack *ps, StackEntry *pe){
    *pe = ps->entry[ps->top-1];
}
/**************************************************************/
void clear_stack(Stack *ps){
    ps->top = 0;
}
/**************************************************************/
int stack_size(Stack *ps){
    return ps->top;
}
/**************************************************************/
void traverse_stack(Stack *ps, void (*pf)(StackEntry e)){
    for(int i=ps->top; i>0; i--){
        (*pf)(ps->entry[i-1]);
    }
}
/**************************************************************/
