#include <bits/stdc++.h>

using namespace std;

int main()
{
	string str;
	cin>>str;


	for (int i = 0; i <= str.length(); ++i)
	{	
		for(int j = 0; j <= str.length() - i; ++j)
			{
				string subs;
				subs = str.substr(j,i);
				cout<<subs<<endl;
			}	
	}
	return 0;
}