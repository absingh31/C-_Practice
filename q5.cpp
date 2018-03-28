/////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////Q : Sum of indices and print if it matches the target value////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////

#include <bits/stdc++.h>

using namespace std;

int main()
{
	int size;

	cout<<"Enter the size of the array"<<endl;
	cin>>size;

	int arr[size], target_val;

	cout<<"Enter the elements of array "<<endl;
	for (int i = 0; i < size; ++i)
		cin>>arr[i];

	cout<<"Enter the target value"<<endl;
	cin>>target_val;

	int sum = 0;

	for (int i = 0; i < size; ++i)
		sum = sum + arr[i];

	cout<<"Sum of indices are : "<<sum<<endl;

	if(sum == target_val)
		cout<<"Sum of indices matches the target value i.e "<<target_val<<endl;

	return 0;
}