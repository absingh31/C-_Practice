#include <bits/stdc++.h>

using namespace std;

int checkpallindrome(int x)
{
	string pallin;
	string reverse_pallin;

	pallin = to_string(x);
	reverse_pallin = pallin;
	reverse(reverse_pallin.begin(), reverse_pallin.end());

	if(pallin.compare(reverse_pallin) == 0)
		return 1;

	return 0;
}

int main()
{
	int n;
	cout<<"Enter the number of test cases"<<endl;
	cin>>n;

	long long int arr[n];

	for (int i = 0; i < n; ++i)
		cin>>arr[i];

	for (int i = 0; i < n; ++i)
	{
		int counter=1;
		while(1)
		{
			int result_back = checkpallindrome(arr[i]-counter);
			if(result_back==1)
			{
				cout<<(arr[i]-counter)<<endl;
				break;
			}

			int result_front = checkpallindrome(arr[i]+counter);
			if(result_front == 1)
			{
				cout<<(arr[i]+counter)<<endl;
				break;
			}

			counter++;
		}
	}

	return 0;
}