////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Q : Given an unsorted array of positive integers. Find the number of triangles that can be formed with three different array elements as three sides of triangles. //
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <bits/stdc++.h>

using namespace std;

int main()
{
	int size;
	int count = 0;

	cout<<"Enter the size of the array"<<endl;
	cin>>size;

	int arr[size];

	cout<<"Enter the elements of the array"<<endl;
	for (int i = 0; i < size; ++i)
		cin>>arr[i];

	sort(arr, arr+size);

	for (int a = 0; a < size-2; ++a)
	{
		int c = a+2;

		for (int b = a+1; b < size; ++b)
		{
			while(arr[a]+arr[b]>arr[c] && c<size)
				c++;

			count = count + c - b - 1;
		}

	}

	cout<<"The number of triangles that can be formed are : "<<count<<endl;

	return 0;
}