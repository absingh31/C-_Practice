///////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////Q : Find the no of odd number of factors in a given number./////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <bits/stdc++.h>

using namespace std;

int main()
{
	int num;
	int count = 0;

	cout<<"Enter the number"<<endl;
	cin>>num;

	// TRAVERSE TILL HALF OF THE NUMBER, SAVES COMPUTATION
	for (int i = 1; i < num/2; ++i)
		if(num%i == 0 && num%2 != 0)
			count++;

	// THIS IS DONE IF NUMBER IS ODD THEN NUMBER ITSELF IS ODD FACTOR BUT THIS IS NOT TRUE FOR EVEN
	if(num%2 != 0)
		count++;

	cout<<"The number of odd factors of the given number are : "<<count<<endl;

	return 0;
}