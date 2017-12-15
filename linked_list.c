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

	second->data = 2;
	second->next = third;

	third->data = 3;
	third->next = NULL;

	traversal(head);

	return 0;
}