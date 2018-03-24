#include <bits/stdc++.h>

using namespace std;

int main()
{
	int count;
	cin>>count;
	count = count*2;
	int arr[count];
	
	for (int i = 0; i < count; i=i+2)
	{
		cin>>arr[i]>>arr[i+1];
	}

	for (int i = 0; i < count; i=i+2)
	{
		if(arr[i]>0 && arr[i+1]>0)
			cout<<pow(arr[i], arr[i+1])<<endl;
		else
			cout<<"Numbers entered should be positive"<<endl;
	}
}