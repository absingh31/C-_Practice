#include<iostream>
#include<stdlib.h>
#include<string>
#include<algorithm>

using namespace std;

int power_c(int x, int y)
{
	int result=1;
	for (int i = 0; i < y; ++i)
	{
		result = result * x;
	}
	return result;
}

void hello(char *name)
{
	cout<<"Hello "<<name	<<endl;	
}


int main()
{
	int x, y;
	char name[100];

	// string s;
	// cin>>s;
	// reverse(s.begin(), s.end());
	// cout<<s<<endl;

	// int *a, n, num, index;
	// cin>>n>>num>>index;
	// a = (int*)calloc(n+1, sizeof(int));
	// cout<<"Enter the elements"<<endl;
	// for (int i = 0; i < n; ++i)
	// 	cin>>a[i];
	// for(int i = n; i>=index; i--)
	// 	a[i] = a[i-1];
	// *(a+index) = num;
	// for (int i = 0; i <= n; ++i)
	// 	cout<<a[i]<<endl;
	// free(a);

	// cout<<"Enter your name "<<endl;
	// cin>>name;
	// hello(name);

	// cout<<"Enter the base and power values";
	// cin>>x>>y;
	// cout<<"Value is "<<power_c(x,y);

	return 0;
}
