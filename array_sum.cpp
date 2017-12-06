#include<iostream>
#include<fstream>

using namespace std;

ifstream f("data.in");
ofstream g("data.out");

int A[100], n, i;

int main()
{
	f>>n;
	for (i=0;i<n;++i)
	{
		int x;
		f>>x;
		++A[x];
	}

	if(A[4] > 0)   g<<"a";
		else g<<"na";	

	return 0;
}
