#include"doublylinkedlist.h"

int main() {

	int i = 0;
	int count = 0;
	node* head = NULL;
	node* newnode = NULL;
	node* cur = NULL;
	

	for (i = 0;i < 5;i++)
	{
		newnode = get_new_node(i);
		append_node(&head, newnode);
	}

	count = count_node(head);
	printf("print list data\n");
	for (i = 0;i < count;i++)
	{
		cur = get_at_node(head, i);
		printf("list[%d] : %d\n", i, cur->data);
	}

	cur = get_at_node(head, 2);
	newnode = get_new_node(1000);
	insert_node(cur, newnode);

	count = count_node(head);
	printf("\nprint list data2\n");
	for (i = 0;i < count;i++)
	{
		cur = get_at_node(head, i);
		printf("list[%d] : %d\n", i, cur->data);
	}

	for (i = 0;i < count;i++)
	{
		cur = get_at_node(head, 0);
		printf("delete data : %d\n", cur->data);
		delete_node(&head, cur);
	}
	if (head == NULL)
	{
		printf("\n모든 노드가 삭제됨");
	}

	return;
}