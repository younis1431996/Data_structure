/*
 ============================================================================
 Name        : Data_structure_queue_array_based.c
 Author      : Mahmoud Mohamed Younis
 Version     : 1.0
 Copyright   : © 2021 oct younis.
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "../queue/queue.h"

void display(QueueEntry e){
	printf("%d\t", e);
}
int main(void) {
	int arr[5] = {10, 20, 30, 40, 50};

	Queue q;

	create_queue(&q);

	int e_arr = sizeof(arr)/sizeof(int);

	for(int i=0; i<e_arr; i++){
		Append(arr[i], &q);
	}

	Traverse_queue(&q, &display);

	printf("\nQueue size = %d", Queue_size(&q));
	return EXIT_SUCCESS;
}
