/*
 ============================================================================
 Name        : lists.h
 Author      : Mahmoud Mohamed Younis
 Version     : 1.0
 Copyright   : © 2021 oct younis.
 ============================================================================
 */
#ifndef LISTS_H_
#define LISTS_H_

/* inclusions */
#include <stdio.h>
#include <stdlib.h>

/* definitions */
#define MAX_LIST 100
typedef int ListEntry;

/* list structure */
typedef struct list{
	ListEntry entry[MAX_LIST];
	int size;
}List;

/* functions */
void create_list(List *pl);

int is_list_empty(List *pl);

int is_list_full(List *pl);

int list_size(List *pl);

void cleare_list(List *pl);

void insert_element(int index, ListEntry e, List *pl);

void delete_element(int index, ListEntry *pe, List *pl);

void retrive_list(int index, ListEntry *pe, List *pl);

void replace_list(int index, ListEntry e, List *pl);

void traverse_list(List *pl, void (*pf)(ListEntry));
#endif
