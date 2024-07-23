#include "stack.h"

int main() {

	int i = 0;
	int size = 0;
	arraystack* stack = NULL;
	
	create_stack(&stack, 10);
	for (i = 0;i < 10;i++)
	{
		push(stack, i);
	}
	printf("capacity:%d, size:%d,top:%d\n", stack->capacity, get_size_stack(stack), stack->top);
	while (1) {
		if (isempty_stack(stack))
		{
			printf("stack is empty");
			break;
		}
		else
		{
			int data=pop(stack);
			printf("\n%d\n", data);
		}
	}

	printf("destroy array stack\n");
	destroy_stack(stack);
	//free되어있다고 해서 원래의 포인터가 널상태가 되는 것은 아니다. 
	return;
}