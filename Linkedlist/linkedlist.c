#include "linkedlist.h"

node* get_new_node(int data) {

	node* temp = (node*)malloc(sizeof(node));
	temp->data = data;
	temp->next = NULL;

	return temp;

}

void delete_node(node* node) {

	free(node);
}

void insert_node(node**head,int data) {

	if (*head == NULL)
	{
		*head = get_new_node(data);
		return;
	}

	node* ptr = *head;

	while (ptr->next != NULL)
	{
		ptr = ptr->next;
	}
	ptr->next = get_new_node(data);

}

void print_data(node** head) {

	node* cur = *head;

	while (cur != NULL)
	{
		printf("%d", cur->data);
		cur = cur->next;
	}

}

void insert_node2(node** head, int data, int number)
{

	node* prev = *head;
	if (*head == NULL) {
		if (number == 1) {
			*head = get_new_node(data);
		}
		return;
	}


	if (number == 1) {
		node* temp = get_new_node(data);
		temp->next = prev->next;
		free(prev);
		*head = temp;
		return;
	}

	for (int i = 2;i < number;i++)
	{
		if (prev->next == NULL) {
			return;
		}
		prev = prev->next;
	}
	
	if (prev->next != NULL) {
		node* temp = get_new_node(data);
		temp->next = (prev->next)->next;
		free(prev->next);
		prev->next = temp;
	}
}