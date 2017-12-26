#include<stdio.h>
#include<stdlib.h>

int i;

struct Node
{
	int data;
	struct Node *next;
};

void traversal(struct Node *n)
{
	while(n != NULL)
	{
		printf("Data of %d node is %d and address of next is %d\n", i+1, n->data, n->next);
		i++;
		n = n->next;
	}
	i=0;
}

void push_head(struct Node **head_ref, int new_data)
{
	struct Node *new_node = (struct Node*)malloc(sizeof(struct Node));
	new_node->data = new_data;
	new_node->next = *head_ref;
	*head_ref = new_node;
}

void append(struct Node **head_ref, int new_data)
{
	struct Node *last = (struct Node*)malloc(sizeof(struct Node));

	last->data = new_data;
	last->next = NULL;

	struct Node *traverse = (struct Node*)malloc(sizeof(struct Node));
	traverse = *head_ref;

	if (*head_ref == NULL)
	{	
		*head_ref = last;
		return;
	}

	while(traverse->next != NULL)
		traverse = traverse->next;

	traverse->next = last;
	return;
}

void insert_after(struct Node* prev_node, int new_data)
{
	struct Node *new_node = (struct Node*)malloc(sizeof(struct Node));

	new_node->data = new_data;
	new_node->next = prev_node->next;
	prev_node->next = new_node;

	return;
}

void delete_node(struct Node **head_ref, int position)
{
	int count=0;
	struct Node *traverse = (struct Node*)malloc(sizeof(struct Node));
	traverse = *head_ref;

	if(position == 0)
	{
		*head_ref = traverse->next;
		free(traverse);
	}

	while(count != position-2)
	{
		traverse = traverse->next;
		count++;
	}

	if(traverse->next == NULL)
	{
		printf("ERROR!! Position given is more than dimension of the linked list\n");
		exit(0);
	}

	traverse->next = traverse->next->next;

	return;
}

int length_iter(struct Node **head_ref)
{
	int count=0;
	struct Node *n = (struct Node*)malloc(sizeof(struct Node));
	n = *head_ref;

	while(n != NULL)
	{
		n = n->next;
		count++;
	}

	return count;
}

int length_rec(struct Node *head_ref)
{
	if(head_ref == NULL)
		return 0;

	return 1 + length_rec(head_ref->next);
}

void swap_nodes(struct Node **head_ref, int data1, int data2)
{
	struct Node *pos1 = (struct Node*)malloc(sizeof(struct Node));
	pos1 = *head_ref;
	struct Node *pos2 = (struct Node*)malloc(sizeof(struct Node));
	pos2 = *head_ref;

	while(pos1->data!=data1)
		pos1 = pos1->next;

	while(pos2->data!=data2)
		pos2 = pos2->next;

	printf("THE DATA IS %d\n", pos1->data);
	pos1->data = pos1->data + pos2->data;
	pos2->data = pos1->data - pos2->data;
	pos1->data = pos1->data - pos2->data;

	return;
}

int main()
{
	struct Node* head = NULL;
	struct Node* second = NULL;
	struct Node* third = NULL;

	head = (struct Node*)malloc(sizeof(struct Node));
	second = (struct Node*)malloc(sizeof(struct Node));
	third = (struct Node*)malloc(sizeof(struct Node));

	head->data = 1;
	head->next = second;

	second->data = 211;
	second->next = third;

	third->data = 3;
	third->next = NULL;

	push_head(&head, 100);
	append(&head, 200);
	insert_after(head->next, 300);
//	delete_node(&head, 5);
	traversal(head);
	swap_nodes(&head, 100, 200);
	traversal(head);

	int len_iter = length_iter(&head);
	int len = length_rec(head);
	printf("Length of linked list is %d or %d\n", len, len_iter);

	free(head);
	free(second);
	free(third);

	return 0;
} 