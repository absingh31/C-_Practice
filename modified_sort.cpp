#include <bits/stdc++.h>

using namespace std;

int main()
{
	int count;
	cin>>count;

	long double arr[count];
	for (int i = 0; i < count; ++i)
		cin>>arr[i];

	sort(arr, arr+count, greater<long double>());

	for (int i = 0; i < count; ++i)
		{cout.precision(arr[i]);cout<<arr[i]<<endl;}

	return 0;
}