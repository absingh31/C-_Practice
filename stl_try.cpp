#include<bits/stdc++.h>

using namespace std;
int main()
{
	string str1,str2;
	str1="abhishek";
	str2 = "singh";
	int a=4,b=6;
	cout<<str1<<str2<<endl;
	cout<<str1.capacity()<<endl;
	
	
	cout<<str1.find_first_of("a")<<endl;
	cout<<str1.find_first_not_of("b")<<endl;
	return 0;
}

