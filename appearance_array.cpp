#include<iostream>
#include<fstream>

using namespace std;

#define start int main()
#define bye return 0

int array[100];

start
{
	int n;
	ifstream in_data("data.in");
	ofstream out_data("data.out");

	in_data>>n;  // Taking input of size of array
	for(int i= 0; i<= n; i++)
	{
		int x;
		in_data>>x;
		array[x]++;
	}

	// cheking if '4' exist here or notenter
	int x;
	cout<<"Enter the number whose appearance you wanna check in data.in file"<<endl;
	cin>>x;
	if(array[x]>0)
	{
		out_data<<"Yes it does exist there in the data.in file"<<endl;
		out_data<<"Number of times it appeared : "<<array[x]<<endl;
	}
	else
		out_data<<"No it does not exist in the data.in file"<<endl;

	bye;
}