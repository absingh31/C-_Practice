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
	traversal(head);

	free(head);
	free(second);
	free(third);


	return 0;
} 