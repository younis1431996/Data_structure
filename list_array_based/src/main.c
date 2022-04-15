/*
 ============================================================================
 Name        : Data_structure_lists_array_based.c
 Author      : Mahmoud Mohamed Younis
 Version     : 1.0
 Copyright   : © 2021 oct younis.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "../lists/lists.h"

void display(ListEntry e){
	printf("%d\t", e);
}

int main(void) {
	int i;
	int arr[5] = {1, 2, 3, 4, 5};
	List l;
	create_list(&l);

	int number_of_elements = sizeof(arr)/sizeof(int);
	for(i=0; i<number_of_elements; i++)
		insert_element(i, arr[i], &l);

	traverse_list(&l, &display);

	printf("\n");

	// insert 0
	insert_element(2, 0, &l);
	traverse_list(&l, &display);

	printf("\n");

	//delete 5
	delete_element(5, &i, &l);
	traverse_list(&l, &display);
	return EXIT_SUCCESS;
}
