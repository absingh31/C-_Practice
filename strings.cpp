#include <iostream>
#include <string>

using namespace std;


int index(string string1, string string2)
{
	int x = string1.find(string2);
	cout<<x<<endl;
	cout<<string1.substr(3,string1.length())<<endl;	
	return x;
}
int main()
{
	string string1 = "abhishek";
	string string2 = "shek";
	int x= index(string1, string2);
	if(string1.compare("abhishek") == 0)
		cout<<"yes"<<endl;
	return 0;
}