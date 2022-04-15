/*
 ============================================================================
 Name        : lists.c
 Author      : Mahmoud Mohamed Younis
 Version     : 1.0
 Copyright   : © 2021 oct younis.
 ============================================================================
 */
#include "../lists/lists.h"

void create_list(List *pl){
	pl->size = 0;
}

int is_list_empty(List *pl){
	return !pl->size;
}

int is_list_full(List *pl){
	return pl->size==MAX_LIST;
}

int list_size(List *pl){
	return pl->size;
}

void cleare_list(List *pl){
	pl->size = 0;
}

void insert_element(int index, ListEntry e, List *pl){
	int i;
	for(i=pl->size; i>=index; i--)
		pl->entry[i+1] = pl->entry[i];

	pl->entry[index] = e;
	pl->size++;
}

void delete_element(int index, ListEntry *pe, List *pl){
	int i;
	*pe = pl->entry[index];
	for(i=index+1; i<=pl->size; i++)
		pl->entry[i-1] = pl->entry[i];

	pl->size--;
}

void retrive_list(int index, ListEntry *pe, List *pl){
	*pe = pl->entry[index];
}

void replace_list(int index, ListEntry e, List *pl){
	pl->entry[index] = e;
}

void traverse_list(List *pl, void (*pf)(ListEntry)){
	int i;
	for(i=0; i<pl->size; i++)
		(*pf)(pl->entry[i]);
}
