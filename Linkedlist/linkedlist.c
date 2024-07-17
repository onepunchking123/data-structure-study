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

void insert_node3(node** head, int data) {
	node* tmp = get_new_node(data);
	if (*head == NULL) {
		*head = tmp;
	}
	else {
		tmp->next = *head;
		*head = tmp;
	}

}

void print_data(node** head) {

	node* cur = *head;

	while (cur != NULL)
	{
		printf("%d ", cur->data);
		cur = cur->next;
	}
	printf("\n");

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

node* get_node_at(node** head, int location) {
	if (location < 1) {
		printf("1이상의 숫자를 다시 입력하세요");
	}
	node* tmp = *head;
	while (tmp != NULL && (--location) >= 1) {
		tmp = tmp->next;
	}
	printf("%d", tmp->data);
	return tmp;
}

void remove_node(node** head, int location) {
	node* rmv = get_node_at(&head, location);
	if (*head == rmv)
	{
		*head = rmv->next;
	}
	else {
		node* prev = *head;
		while (prev != NULL && prev->next != rmv) {
			prev = prev->next;
		}
		if (prev != NULL)
			prev->next = rmv->next;
	}
}

int get_node_count(node** head) {
	int count = 0;
	node* cur = *head;
	while (cur !=NULL) {
		cur = cur->next;
		count++;
	}
	return count;
}

