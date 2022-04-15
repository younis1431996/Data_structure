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
	pl->head = NULL;
	pl->size = 0;
}

int is_list_empty(List *pl){
	return !pl->size;
}

int is_list_full(List *pl){
	return 0;
}

int list_size(List *pl){
	return pl->size;
}

void cleare_list(List *pl){
	ListNode *q;
	while(pl->head){
		q = pl->head->next;
		free(pl->head);
		pl->head = q;
	}
	pl->size = 0;
}

void insert_element(int index, ListEntry e, List *pl){
	ListNode *p,*q;
	int i;

	p = (ListNode*)malloc(sizeof(ListNode));
	p->entry = e;

	if(index == 0){
		p->next = pl->head;
		pl->head = p;
	}
	else{
		for(q=pl->head, i=0; i<index-1; i++)
			q = q->next;
		p->next = q->next;
		q->next = p;
	}
	pl->size--;

}

void delete_element(int index, ListEntry *pe, List *pl){
	ListNode *q,*temp;
	int i;

	if(index == 0){
		*pe = pl->head->entry;
		temp = pl->head->next;
		free(pl->head);
		pl->head = temp;
	}
	else{
		for(q=pl->head, i=0; i<index-1; i++)
			q = q->next;
		*pe = q->next->entry;
		temp = q->next->next;
		free(q->next);
		q->next = temp;
	}
	pl->size--;
}

void retrive_list(int index, ListEntry *pe, List *pl){
	ListNode *q;
	int i;
	for(q=pl->head, i=0; i<index; i++)
		q = q->next;
	*pe = q->entry;
}

void replace_list(int index, ListEntry e, List *pl){
	ListNode *q;
	int i;
	for(q=pl->head, i=0; i<index; i++)
		q = q->next;
	q->entry = e;
}

void traverse_list(List *pl, void (*pf)(ListEntry)){
	ListNode *q = pl->head;
	while(q){
		(*pf)(q->entry);
		q = q->next;
	}
}
