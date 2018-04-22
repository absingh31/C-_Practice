#include <iostream>
#include <fstream>
#include <set>
#include <string>

using namespace std;

int main()
{
	ifstream f;
	f.open("example.txt");
	multiset<string> m1;

	string text;

	while(f>>text)
	{
		m1.insert(text);
	}	
	f.close();

	for(auto &val:m1)
		cout<<val<<endl;

	ofstream f1;
	f1.open("to_write.txt");

	for(auto &val:m1)
		f1 << val << endl;

	f1.close();
	string a1 = "hehe";
	string a2 = "haha";
	a1.append(a2);

	cout<<a1<<endl;

	return 0;
}