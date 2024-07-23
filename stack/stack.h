#pragma once
#ifndef STACK_H
#define STACK_H
#include<stdio.h>
#include<stdlib.h>


typedef struct node {

	int data;

}node;

typedef struct arraystack{
	int capacity;
	int top;
	node* node;
}arraystack;

void create_stack(arraystack** stack, int capacity);
void destroy_stack(arraystack* stack);
void push(arraystack* stack, int data);
int pop(arraystack* stack);
int top(arraystack* stack);
int get_size_stack(arraystack* stack);
int isempty_stack(arraystack* stack);
int isfull_stack(arraystack* stack);

#endif // !STACK_H
