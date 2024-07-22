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
;
	cur = get_at_node(head, 2);
	newnode = get_new_node(3000);
	insert_node(cur, newnode);

	printf("\nprint current node\n");
	count = count_node(head);

	for (i = 0;i < count;i++)
	{
		cur = get_at_node(&head, i);
		printf("list[%d]:%d\n", i + 1, cur->data);
	}
	printf("\ndestroy list\n");
	

	return;
}