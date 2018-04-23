#include <bits/stdc++.h>

using namespace std;

int main()
{
	long long int arm, copy_arm;
	cout<<"Enter the number : "<<endl;
	cin>>arm;
	copy_arm=arm;
	vector<long long int> v1;
	while(arm>0)
	{
		v1.push_back(arm%10);
		arm = arm/10;
	}		
	int n = v1.size();

	long long int sum = 0;

	for(auto &val:v1)
		sum = pow(val, v1.size()) + sum;

	if(sum==copy_arm)
		cout<<"Armstrong number"<<endl;
	else
		cout<<"Not an Armstrong number"<<endl;
	return 0;
}