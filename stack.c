#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

struct Stack
{
	int top;
	int capacity;
	int *array;
};


struct Stack* createStack(int capacity)
{
	struct Stack *s1 = (struct Stack*)malloc(sizeof(struct Stack));
	s1->top = -1;
	s1->capacity = capacity;
	s1->array = (int*)malloc((s1->capacity)*sizeof(int));

	return s1;
}

bool isEmpty(struct Stack* stack)
{
	if (stack->top == -1)
		return true;
	else
		return false;
}

bool isFull(struct Stack *stack)
{
	if(stack->top == stack->capacity - 1)
		return true;
	else
		return false;
}

void push(struct Stack* stack, int number)
{
	if(isFull(stack))
		printf("Stack is full\n");
	else 
	{
		stack->top++;
		stack->array[stack->top] = number;
		printf("%d pushed to stack\n", number);
	}
}

void pop(struct Stack *stack)
{
	if(isEmpty(stack))
		printf("Stack is empty, can't pop .... better luck next time\n");
	else
	{
		printf("%d popped from stack\n", stack->array[stack->top]);
		stack->top--;
	}
}

int main()
{
	struct Stack *stack = createStack(10);

	push(stack, 12);
	push(stack, 14);
	pop(stack);

	free(stack);

	return 0;
}

