#include <bits/stdc++.h>

using namespace std;

int j;

int main()
{
	int number, *counter;
	
	stack <char> bin; 
	
	cin>>number;

	string binary;

	binary = bitset<10>(number).to_string();	// convert number into binary string

	int pos = binary.find_first_of('1');   //find position of 1st '1'
	
	binary.erase(0,pos);		// removing the trailing zeroes
	
	for(int i=0; i<binary.length();i++) bin.push(binary[i]);  // push binary into stack

	counter = (int*)calloc(count(binary.begin(), binary.end(),'0'), sizeof(int));  // array to keep track of '0' count
	
	while(!bin.empty())
	{
		if(bin.top()=='0') counter[j]++;
	
		else j++;
	
		bin.pop();
	}
	
	cout<<"Maximum number of zeroes together are : "<<*max_element(counter, counter+j)<<endl; // prints max length of all the zeroes together
	
	cout<<binary<<endl;  // prints the binary number

	free(counter);
	return 0;
}
