#pragma once
#ifndef DOUBLY_LINKEDLIST_H
#define DOUBLY_LINKEDLIST_H

#include<stdio.h>
#include<stdlib.h>

typedef struct node {

	struct node* next;
	struct node* prev;
	int data;

}node;

node* get_new_node(int data);
void destroy_node(node* node);
void append_node(node** head, node* Node);
node* get_at_node(node* head, int location);
node* delete_node(node** head, node* remove);
void insert_node(node* current, node* newnode);
int count_node(node* head);
void print_node(node** head);


#endif