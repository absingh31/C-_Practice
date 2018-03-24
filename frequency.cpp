#include <bits/stdc++.h>

using namespace std;

int main()
{
	int count;
	cin>>count;

	string arr[count];
	int result[count];

	for (int i = 0; i < count; ++i)
		{cin>>arr[i];result[i]=0;}

	sort(arr, arr+count);

	int j=0;

	for (int i = 0; i < count; ++i)
	{

		if (arr[i].compare(arr[i+1])==0)
		{
			result[j]++;
		}
		else
		{
			cout<<result[j]+1<<endl;
			j++;
		}
	}

	return 0;
}