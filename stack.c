#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

struct stack
{
	int top;
	int capacity;
	int *array;
};


struct stack* create(int cap)
{
	struct stack *s1 = (struct stack *)calloc(1, sizeof(struct stack));
	s1->top = -1;
	s1->capacity = cap;
	s1->array = (int*)calloc((s1->capacity), sizeof(int));

	return s1; 
}


bool isEmpty(struct stack *s1)
{
	if(s1->top == -1)
		return true;
	else 
		return false;
}

bool isFull(struct stack *s1)
{
	if(s1->top == s1->capacity - 1)
		return true;
	else
		return false;
}

void push(struct stack *s1, int to_push)
{
	if(isFull(s1))
		printf("Stack is full\n");
	else
	{
		s1->top++;
		s1->array[s1->top] = to_push;
		printf("%d pushed into stack\n", s1->array[s1->top]);
	}
}

void pop(struct stack *s1)
{
	if(isEmpty(s1))
		printf("Stack is empty\n");
	else
	{
		printf("%d is popped \n", s1->array[s1->top]);
		s1->top--;
	}
}

void display(struct stack *s1)
{
	if(isEmpty(s1))
		printf("Stack empty\n");
	for (int i = s1->top; i >= 0; --i)
	{
		printf("%d\n", s1->array[i]);
	}
}


void controller(struct stack *s1)
{
	printf("\tWelcome to stack controller\n");
	while(1)
	{
		printf("\n\n\t*********Menu**********\n");
		printf("\tTo push enter 1\n\tTo pop enter 2\n\tTo display enter 3\n\tTo exit enter 4\n");
		int choice;
		scanf("%d", &choice);
		switch(choice)
		{
			case 1: printf("Enter the value to be pushed\n");
					int x;
					scanf("%d", &x);
					push(s1, x);
					break;
			case 2: pop(s1);
					break;
			case 3: display(s1);
					break;
			case 4: exit(0);
			default: printf("Wrong Choice\n");
		}
	}	
}


int main()
{
	struct stack *s1 = create(10);

	controller(s1);

	free(s1);

	return 0;
}
