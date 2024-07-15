#define _CRT_SECURE_NO_WARNINGS
#include "linkedlist.h"
int main() {

	node* head = NULL;
	insert_node(&head, 4);
	insert_node(&head, 5);
	insert_node(&head, 6);
	insert_node(&head, 7);
	print_data(&head);
	printf("\n");
	insert_node2(&head, 3, 3);
	print_data(&head);
	printf("\n");
	insert_node2(&head, 1, 1);
	print_data(&head);
	printf("\n");
	insert_node2(&head, 2, 2);
	print_data(&head);
}