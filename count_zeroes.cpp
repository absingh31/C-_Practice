#include <bits/stdc++.h>

using namespace std;
int j;
int main()
{
	int number;
	stack <char> bin; 
	cin>>number;

	string binary;

	binary = bitset<10>(number).to_string();	// convert number into binary string

	int pos = binary.find_first_of('1');   //find position of 1st '1'

	binary.erase(0,pos);		// removing the trailing zeroes
	for(int i=0; i<binary.length();i++) bin.push(binary[i]);

	int *counter;
	counter = (int*)calloc(count(binary.begin(), binary.end(),'0'), sizeof(int));
	while(!bin.empty())
	{
		if(bin.top()=='0')
			counter[j]++;
		else
			j++;
		bin.pop();
	}

	cout<<*max_element(counter, counter+j)<<endl; // prints max length of all the zeroes together

	cout<<binary<<endl;

	return 0;
}
