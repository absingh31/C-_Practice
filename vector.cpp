#include <bits/stdc++.h>

using namespace std;

int main()
{
	vector<string> v1(10);

	for (int i = 0; i < 5; ++i)
		cin>>v1[i];

	cout<<"\n"<<v1.size()<<endl;
	cout<<v1.at(3)<<endl;
	cout<<v1.empty()<<endl;
	cout<<*(v1.begin())<<endl;
	cout<<*(v1.end()-1)<<endl;
	cout<<v1.front()<<endl;
	cout<<v1.back()<<endl;
	cout<<v1.capacity()<<endl;
	v1.push_back("singh");             //PUSHES BACK AT THE LAST ELEMENT EVEN IF THE VECTOR IS EMPTY
	v1.pop_back();					//POPS THE  LAST ELEMENT LITERALLY, MEANS LIKE THE ABOVE CASE
	v1.insert(v1.begin(), "start");

	for (int i = 0; i < 7; ++i)
		cout<<v1[i]<<"     "<<i<<endl;

	return 0;
}