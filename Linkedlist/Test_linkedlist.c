#define _CRT_SECURE_NO_WARNINGS
#include "linkedlist.h"
int main() {
	int c = 0;
	node* head = NULL;
	insert_node(&head, 4);
	insert_node(&head, 5);
	insert_node(&head, 6);
	insert_node(&head, 7);
	print_data(&head);
	c = get_node_count(&head);
	printf("%d", c);
}