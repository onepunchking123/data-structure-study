#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include<stdio.h>
#include<stdlib.h>

typedef struct node {


	int data;
	struct node* next;
}node;

node* get_new_node(int data);
void delete_node(node* node);
void insert_node(node** head, int data);
void insert_node3(node** head, int data);
void print_data(node** head);
void insert_node2(node** head, int data, int number);
node* get_node_at(node** head, int location);
void remove_node(node** head, int location);
int get_node_count(node** head);

#endif
