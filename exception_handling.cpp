#include <iostream>

using namespace std;

int main()
{

int x[3]={-1,2};

for(int i=0;i<2;i++)
{
	int ex=x[i];
	try {
		if (ex > 0)
			throw ex;
		else
			throw 'e';
} 
catch (int ex) 
{
	cout << " Integer exception"<<endl ;
} 
catch (char ex) 
{
	cout << " Character exception"<<endl ;
}
catch (...) 
{
	cout<<x[i]<<endl;
	cout << "Special exception"<<endl;
}
}
return 0;
}