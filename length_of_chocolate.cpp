#include <bits/stdc++.h>

using namespace std;

int main()
{
	int count;
	cin>>count;

	for (int i = 0; i < count; ++i)
	{
		int num;
		cin>>num;

		int arr[num];
		for (int i = 0; i < num; ++i)
			cin>>arr[i];
		for (int i = 1; i < num; ++i)
		{
			arr[i] = __gcd(arr[i], arr[i-1]);
			cout<<arr[i]<<endl;
		}
	}

	return 0;
}