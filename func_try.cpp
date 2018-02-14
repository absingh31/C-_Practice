#include <iostream>

using namespace std;

void swap(int &x, int &y)
{
	int z = x;
	x=y;
	y=z;
}

int main()
{
	int a,b;
	cout<<"Enter the values : "<<endl;
	cin>>a>>b;

	cout<<"Numbers before swap : "<<a<<" and "<<b<<endl;

	swap(a,b);

	cout<<"Numbers after swap : "<<a<<" and "<<b<<endl;

	return 0;
}