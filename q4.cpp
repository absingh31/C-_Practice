//////////////////////////////////////////////////////////////////////////////////////////////////////
//////////Q : Find the minimum prime factor and subtract with the given input value.//////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////


#include <bits/stdc++.h>

using namespace std;

//ASSUMPTION : FOR 1 I'LL RETURN 1 AS THE LEAST PRIME NUMBER

int check_prime(int num)
{
	if(num<=1)
		return 0;

	for (int i = 2; i < sqrt(num); ++i)
		if(num%i==0)
			return 0;

	return 1;
}

int findminpf(int num)
{
	if(num == 1)
		return 1;

	if(num<1)
	{
		cout<<"You entered a negative number"<<endl;
		exit(0);
	}

	if(num%2 == 0)
		return 2;

	for (int i = 3; i <= num; ++i)
		if(num%i == 0 && check_prime(i) == 1)
			return i;
}

int main()
{
	int num;

	cout<<"Enter The Number"<<endl;
	cin>>num;

	int res = findminpf(num);

	cout<<"Value asked is : "<<(num-res)<<endl;

	return 0;
}