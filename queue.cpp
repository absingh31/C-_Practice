#include<iostream>

using namespace std;

#define start int main()
#define pop_element void pop()
#define push_element void push(int x)
#define queue_empty bool isEmpty()
#define first_element int front_element()
#define bye return 0


int front,back;
int queue[100];

queue_empty
{
	if(back<front)
		return true;
	else
		return false;
}

pop_element
{
	queue[front]=0;
	++front;
}

push_element
{
	++back;
	queue[back]=x;
}

first_element
{
	if(!isEmpty)
	{
		cout<<"Queue is empty"<<endl;
		bye;
	}
		
	else
		return queue[front];
}


start
{
	back = -1;
	front = 0;

	push(5);
	push(7);
	pop();
	
	cout<<front_element()<<endl;
	
	bye;
}


