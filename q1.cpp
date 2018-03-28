//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////Q : Given two arrays, multiply first element of first array with last element of second array then second element with second last and so on and add them./////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <bits/stdc++.h>

using namespace std;

int main()
{
	int size;

	cout<<"Enter the size of both the arrays"<<endl;
	cin>>size;

	int arr1[size], arr2[size];

	cout<<"Enter the elements of first array"<<endl;
	for (int i = 0; i < size; ++i)
		cin>>arr1[i];

	cout<<"Enter the elements of second array"<<endl;
	for (int i = 0; i < size; ++i)
		cin>>arr2[i];

	int sum = 0;
	for (int i = 0; i < size; ++i)
		sum = sum  + arr1[i]*arr2[size-i-1];

	cout<<"Sum is : "<<sum<<endl;

	return 0;
}
