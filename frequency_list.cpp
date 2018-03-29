#include <bits/stdc++.h>

using namespace std;

int main()
{
	int size;

	cout<<"Enter the size of list"<<endl;
	cin>>size;

	list<int> l1;

	for (int i = 0; i < size; ++i)
	{
		int x;
		cin>>x;
		l1.push_back(x);
	}

	l1.sort();

	set<int> s1;

	list<int>::iterator itn;
	for (itn = l1.begin(); itn!=l1.end();++itn)
		s1.insert(*itn);
		

	map<int, int> m1;

	set<int>::iterator it;
	for (it = s1.begin(); it!=s1.end();++it)
	{
		int ct = count(l1.begin(), l1.end(), *it);
		m1.insert(pair<int, int>(*it, ct));
	}

	map<int,int>::iterator mi;
	for (mi = m1.begin(); mi!=m1.end();++mi)
		cout<<mi->first<<" "<<mi->second<<endl;

	return 0;
}