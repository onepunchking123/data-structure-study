#include "stack.h"
void create_stack(arraystack** stack, int capacity) {

	*stack = (arraystack*)malloc(sizeof(arraystack));

	(*stack)->node = (node*)malloc(sizeof(node) * capacity);
	(*stack)->top = -1;
	(*stack)->capacity = capacity;

};


void destroy_stack(arraystack* stack) {
	free(stack->node);

	free(stack);
}

void push(arraystack* stack, int data) {

	if (isfull_stack(stack))
	{
		printf("stack is full");
		return;
	}
	stack->top++;
	stack->node[stack->top].data = data;

}

int pop(arraystack* stack)
{
	return stack->node[(stack->top)--].data;
}

int top(arraystack* stack)
{
	return stack->node[stack->top].data;
}


int get_size_stack(arraystack* stack) {

	return stack->top + 1;
}

int isempty_stack(arraystack* stack) {

	return (stack->top == -1);
}

int isfull_stack(arraystack* stack) {

	return (stack->top + 1 == stack->capacity);

}