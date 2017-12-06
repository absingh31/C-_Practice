#include<iostream>

using namespace std;

int x;

bool ise()
{
	if(x==0)
		return true;
	else
		return false;
}

int main()
{
	x++;
	bool a=ise();
	cout<<a<<endl;
	return 0;
}