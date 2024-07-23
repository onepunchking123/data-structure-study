#include "doublylinkedlist.h"
node* get_new_node(int data) {

	node* tmp = (node*)malloc(sizeof(node));
	tmp->next = NULL;
	tmp->prev = NULL;
	tmp->data = data;

	return tmp;
}


void destroy_node(node* node)
{
	free(node);
}


void append_node(node** head,node* Node) {

	if (*head == NULL) {
		*head = Node;
		
	}
	else
	{
		node* tail = (*head);
		while (tail->next != NULL) {
			tail = tail->next;
		}//여기에 도착하면 반복문을 탈출한 상태이므로 가장 끝 노드에 도달한 상태임
		tail->next = Node;
		Node->prev = tail;
	}

}

node* get_at_node(node* head,int location) {

	node* tmp = head;
	while (tmp != NULL && (--location) >= 0)
	{
		tmp = tmp->next;
	}

	return tmp;
}

node* delete_node(node** head, node* remove) {

	if (*head == remove)
	{
		*head = remove->next;
		if(*head !=NULL)
			(*head)->prev = NULL;
		

		remove->next = NULL;
		remove->prev = NULL;
	}
	else
	{
		if(remove->prev !=NULL)
			(remove->prev)->next = remove->next;
		if(remove->next !=NULL)
			(remove->next) ->prev = remove->prev;
		
		remove->prev = NULL;
		remove->next = NULL;
	}
	free(remove);

}
void insert_node(node* current, node* newnode) 
{
	newnode->next = current->next;
	newnode->prev = current;


	if (current->next != NULL)
	{
		(current->next)->prev = newnode;
		current->next = newnode;
	}
}

int count_node(node* head)
{

	int cnt = 0;
	node* cur = head;
	while (cur != NULL)
	{
		cur = cur->next;
		cnt++ ;
	}
	return cnt;
}

void print_node(node** head)
{

	node* tmp = *head;

	while (tmp != NULL)
	{
		if (tmp->prev == NULL)
		{
			printf("prev is NULL\n");
		}
		else
		{
			printf("prev:%d\n",tmp->prev->data);
		}

		printf("cur : %d\n", tmp->data);

		if (tmp->next == NULL)
		{
			printf("next is NULL\n");
		}
		else
		{
			printf("next : %d\n", tmp->next->data);
		}
		tmp = tmp->next;
	}
	return;
}
