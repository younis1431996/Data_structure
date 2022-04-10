/*
 ============================================================================
 Name        : Data_structure_stack_linked_based.c
 Author      : Mahmoud Mohamed Younis
 Version     : 1.0
 Copyright   : © 2021 oct younis.
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "../stack/stack.h"

void display(StackEntry e){
	printf("%d\t", e);
}

int main(void) {
	Stack s;
	StackEntry array[15] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14};
	int number_of_elements = sizeof(array) / sizeof(StackEntry);

	create_stack(&s);

	for(int i=0; i<number_of_elements; i++){
		push(array[i], &s);
	}

	traverse_stack(&s, &display);

	printf("\nSize of stack = %d", stack_size(&s));

	clear_stack(&s);

	printf("\nSize of stack after clearing = %d", stack_size(&s));

	return EXIT_SUCCESS;
}
