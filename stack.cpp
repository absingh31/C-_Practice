#include<iostream>

using namespace std;

#define start int main()
#define top int top_stack()
#define push void push_stack(int x)
#define pop void pop_stack()
#define check_empty bool isEmpty()
#define bye return 0

int ind;
int stack[100];

check_empty
{
	if(ind<1)
		return true;
	else 
		return false;
}

top
{
	if(!isEmpty())
	{
		cout<<"Top of stack is : "<<stack[ind]<<ind<<endl;
		return stack[ind];
	}
	else
		cout<<"No element in stack yet!!"<<endl;
}

push
{
	++ind;
	stack[ind]=x;
}

pop
{
	stack[ind]=0;
	--ind;
}

start
{	
	push_stack(5);
	
	pop_stack();
	
	push_stack(7);
	
	top_stack();
	
	bye;
}
