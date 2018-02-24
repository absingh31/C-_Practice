#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

struct queue
{
	int front, rear;
	int capacity;
	int *array;
};

struct queue* create(int cap)
{
	struct queue *q1 = (struct queue*)calloc(1, sizeof(struct queue));
	q1->front = 0;
	q1->rear = -1;
	q1->capacity = cap;
	q1->array = (int*)calloc((q1->capacity), sizeof(int));

	return q1;
}

bool isEmpty(struct queue* q1)
{
	if(q1->rear == -1)
		return true;
	else 
		return false;
}

bool isFull(struct queue* q1)
{
	if(q1->rear == q1->capacity - 1)
		return true;
	else 
		return false;
}

void enqueue(struct queue *q1, int to_enq)
{
	if(isFull(q1))
		printf("Queue is full \n");
	else
	{
		q1->rear++;
		q1->array[q1->rear] = to_enq;
	}
}

void dequeue(struct queue *q1)
{
	if(isEmpty(q1))
		printf("Queue is empty\n");
	else
	{
		q1->front++;
	}
}

void itemCount(struct queue* q1)
{
	if(isEmpty(q1))
		printf("No element in queue\n");
	else
	{
		printf("Number of items in queue is %d\n", q1->rear - q1->front + 1);
	}
}

void print_front(struct queue* q1)
{
	if(isEmpty(q1))
		printf("Queue is empty\n");
	else
		printf("Front is %d\n", q1->array[q1->front]);
}

void print_rear(struct queue* q1)
{
	if(isEmpty(q1))
		printf("Queue is empty\n");
	else
		printf("Rear is %d\n", q1->array[q1->rear]);
}

void controller(struct queue *q1)
{
	printf("\n\tWelcome to queue controller\n");
	while(1)
	{
		printf("\t**********MENU**********\n");
		printf("\t Press 1 for enqueue\n\t Press 2 to dequeue\n\t Press 3 to print front\n\t Press 4 to print rear\n\t Press 5 to print number of items in queue\n\t Press 6 to exit\n");
		int x;
		scanf("%d", &x);
		switch(x)
		{
			case 1: printf("Enter the number to enqueue\n");
					int to_enq;
					scanf("%d", &to_enq);
					enqueue(q1, to_enq);
					printf("%d enqueued into queue\n", to_enq);
					break;
			case 2: printf("%d is dequeued\n", q1->array[q1->front]);
					dequeue(q1);
					break;
			case 3: print_front(q1);
					break;
			case 4: print_rear(q1);
					break;
			case 5: itemCount(q1);
					break;
			case 6: exit(0);
			default: printf("You entered a wrong choice\n");
		}
	}
}

int main()
{
	struct queue *q1 = create(10);
	controller(q1);

	free(q1);

	return 0;	
}