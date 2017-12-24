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
		printf("Data in node %d is %d and next is %d, thodi backchodi %p\n", i+1, n->data, n->next, *n);
		i++;
		n=n->next;
	}
}

int main()
{
	struct Node* start = NULL;
	struct Node* end = NULL;

	start = (struct Node*)malloc(sizeof(struct Node));
	end = (struct Node*)malloc(sizeof(struct Node));

	start->data = 12;
	start->next = end;

	end->data = 14;
	end->next = NULL;

	if (end == NULL)
		printf("Hell dude\n");

	traversal(start);

	free(start);
	free(end);

	return 0;
}