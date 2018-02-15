#include <bits/stdc++.h>

using namespace std;

/* Print steps involved in moving plates
   from one tower to another given 3 towers
   considering the rules of tower of hanoi problem */

void toh(int no_of_plates, char a, char b, char c)
{
	if(no_of_plates>0)
	{
		toh(no_of_plates-1, a, c, b);
		cout<<"Plate moved from "<<a<<" to "<<c<<endl;
		toh(no_of_plates-1, b, a, c);
	}
}



int main()
{
	int no_of_plates;

	cout<<"Enter the number of plates : ";
	cin>>no_of_plates;

	/* Assume there are 3 towers in total A, B, C
	   hence to show the move of plate from A to C
	   print A to C on the output screen */

	char a = 'A', b = 'B', c ='C';
	toh(no_of_plates, a, b, c);
}