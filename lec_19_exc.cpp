#include<iostream>
#include<fstream>

using namespace std;

int array[100];

int main()
{
	int i=0;
	ifstream in_obj("data.in");

	while(EOF)
	{
		in_obj>>array[i];
		if (array[i]==0)
		{
			break;
		}
		cout<<array[i]<<endl;
		i++;
	}

	return 0;
}