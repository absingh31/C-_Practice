#include <bits/stdc++.h>

using namespace std;

int main()
{
	int count;
	cin>>count;

	int arr[count];
	for (int i = 0; i < count; ++i)
		cin>>arr[i];

	arr[1]=arr[0]+arr[1];
	for (int i = 1; i < count-1; ++i)
	{
		arr[i+1] = arr[i] + arr[i+1];
		cout<<arr[i]<<endl;
	}

	return 0;
}