/*
 ============================================================================
 Name        : Data_structure_stack_array_based.c
 Author      : Mahmoud Mohamed Younis
 Version     : 1.0
 Copyright   : © 2021 oct younis.
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

#include "../stack/stack.h"
#include "../stack/stack.c"

void display(StackEntry e){
    printf("%d\t", e);
}
int main(int argc, char **argv)
{
	// create stack.
    Stack s_int;

    // integer array will store in the stakc.
    int array[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};

    // create stack.
    create_stack(&s_int);

    // push array into stack.
    int number_of_array_elements = sizeof(array)/sizeof(int);
    if(stack_Full(&s_int)){
        printf("Stack is full");
    }
    else{
            for(int i=0; i<number_of_array_elements; i++){
                push(array[i], &s_int);
                }
    }

    // display stack.
    traverse_stack(&s_int, &display);

    return EXIT_SUCCESS;
}
