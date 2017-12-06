#include<iostream>
#include<fstream>

using namespace std;

int main()
{
	int n;
	ifstream in_data("data.in");

	in_data>>n;

	int array[n];
	for (int i = 0; i <= n; i++)
	{
		cout<<i<<endl;
		in_data>>array[i];
	}
	
		// ++ ON BOTH THE SIDES MEAN THE SAME 

	for (int i = 0; i < n; i++)
	{
		cout<<array[i]<<endl;
	}

	return 0;

}