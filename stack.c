#include<stdio.h>
#include<stdlib.h>

struct Stack
{
	int top;
	unsigned int capacity;
	int *array;
};


struct Stack createStack(unsigned int capacity)
{
	struct Stack *s1 = (struct Stack*)malloc(sizeof(struct Stack));
	s1->top = -1;
	s1->capacity = capacity;
	s1->array = (int*)malloc((stack->capacity)*sizeof(int));

	return s1;
}

bool isEmpty(stuct Stack* stack)
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

void push(struct Stack *stack, int number)
{
	if(!isFull(stack))
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
	if(!isEmpty(stack))
		printf("Stack is empty, can't pop .... better luck next time\n");
	else
	{
		printf("%d popped from stack\n", stack->array[top]);
		stack->top--;
	}
}

int main()
{
	int capacity;
	printf("Enter the capacity of stack\n");
	scanf("%d", &capacity);

	stack = createStack(capacity);



	return 0;
}