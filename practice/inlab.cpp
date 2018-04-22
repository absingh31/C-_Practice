#include <bits/stdc++.h>

using namespace std;

int main()
{
	vector<string> v1;

	cout<<v1.size()<<endl;

	v1.push_back("egg");
	v1.push_back("milk");
	v1.push_back("sugar");
	v1.push_back("chocolate");
	v1.push_back("flour");

	vector<string>::iterator its;

	for(its = v1.begin(); its != v1.end(); ++its)
	{
		cout<<*its<<" ";
	}
	cout<<endl;

	v1.pop_back();

	for(its = v1.begin(); its != v1.end(); ++its)
	{
		cout<<*its<<" ";
	}
	cout<<endl;

	v1.push_back("coffee");


	for(its = v1.begin(); its != v1.end(); ++its)
	{
		cout<<*its<<" ";
	}
	cout<<endl;
	
	sort(v1.begin(), v1.end());

	for(its = v1.begin(); its != v1.end(); ++its)
	{
		cout<<*its<<" ";
	}

	cout<<endl;

	cout<<v1.front()<<endl;
	cout<<v1.back()<<endl;

	vector<string>::iterator it;

	int i=0;
	for(it = v1.begin(); it != v1.end(); ++it)
	{

		if(*it == "sugar")
		{
			v1[i] = "honey";
		}
		++i;	
	}

	for(its = v1.begin(); its != v1.end(); ++its)
	{
		cout<<*its<<" ";
	}
	cout<<endl;

	vector<string>::iterator to;
	to = v1.begin();
	++to;
	++to;
	++to;
	
	v1.erase(to);

	for(its = v1.begin(); its != v1.end(); ++its)
	{
		cout<<*its<<" ";
	}
	cout<<endl;

	vector<string>::iterator itn;

	int j=0;
	for(itn = v1.begin(); itn != v1.end(); ++itn)
	{
		if(v1[j].length() < 5)
		{
			v1.erase(itn);
		}
		++j;	
	}

	for(its = v1.begin(); its != v1.end(); ++its)
	{
		cout<<*its<<" ";
	}
	cout<<endl;

	return 0;
}

