#include <iostream>

using namespace std;

int number_of_ones(unsigned int x)
{
	int count = 0;

	while(x>0)
	{
		count = count + (x&1);
		x = x>>1;
	}
	return count;
}

int main()
{
	unsigned int x;
	cout<<"Enter the number : ";
	cin>>x;
	cout<<"Number of 1's are : "<<number_of_ones(x)<<endl;

	return 0;
}