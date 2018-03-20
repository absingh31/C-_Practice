#include <iostream>

using namespace std;

int binary_search(int arr[], int l, int r, int x)
{
	if(r>=l)
	{
		int mid = l + (r-l)/2;

		if(arr[mid]==x)
			return mid;

		else if(arr[mid]>x)
			return binary_search(arr, l, mid-1, x);

		else if(arr[mid]<x)
			return binary_search(arr, mid+1, r, x);

		else
			return -1;
	}
}

int main()
{
	int arr = {2,4,12,34,65,123,456,500,625}
	int x;

	cout<<"Enter the element to search";

	cin>>x;

	int result = binary_search(arr, 0, len(arr)-1, x);

	if(result == -1)
		cout<<"Element asked for is not present"<<endl;

	else
		cout<<"Element "<<x<<" is present in the given array at "<<result<<endl;

	return 0;
}