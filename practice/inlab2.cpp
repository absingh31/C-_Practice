#include <bits/stdc++.h>

using namespace std;

int checkpallindrome(string input)
{
	if (input == string(input.rbegin(), input.rend())) 
    	return 1;
}

int main()
{
	fstream f;
	f.open("reviews.txt");

	string text;

	while(f>>text)
	{
		if(checkpallindrome(text) == 1)
			cout<<text<<endl;
	}


	return 0;
}