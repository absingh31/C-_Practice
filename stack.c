#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

//I THINK YOU GOTTA HAVE THE STACK DATATYPE, ISN'T IT?
struct Stack
{
	int top;
	int capacity;
	int *array;
};

// FUNCTION TO CREATE NEW STACK AND THEN USE IT FOR YOUR PURPOSE, NOTE THE TYPE IS STRUCT POINTER
struct Stack* createStack(int capacity)
{
	//LET'S FIRST ALLOCATE THE MEMORY THEN THINK ABOUT THE OPERATIONS
	struct Stack *s1 = (struct Stack*)malloc(sizeof(struct Stack));  

	//INITIALISING STUFFS
	s1->top = -1;
	s1->capacity = capacity;
	s1->array = (int*)malloc((s1->capacity)*sizeof(int));

	return s1;
}

//CHECK IF THE STACK IS EMPTY, IF YES THEN RETURN TRUE
bool isEmpty(struct Stack* stack)
{
	if (stack->top == -1)
		return true;
	else
		return false;
}

//CHECK IF THE STACK IS FULL, IF YES THEN RETURN TRUE
bool isFull(struct Stack *stack)
{
	if(stack->top == stack->capacity - 1)
		return true;
	else
		return false;
}

// PUSH THE GIVEN VALUE INTO STACK IF IT IS NOT FULL
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

// POP TOP VALUE FROM THE STACK IF IT IS NOT EMPTY
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

// DO I HAVE TO TELL ABOUT THIS FUNCTION?
int main()
{
	// ONE STACK DECLARED HERE
	struct Stack *stack = createStack(10);

	// PERFORMING SOME OPERATIONS
	push(stack, 12);
	push(stack, 14);
	pop(stack);

	// MAKING THE MEMORY THAT WAS ALLOCATED IN HEAP TO BE FREE
	free(stack);

	return 0;
}

