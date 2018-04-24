#include <bits/stdc++.h>

using namespace std;

void permute(string str, set <string>& s)
{
    sort(str.begin(), str.end());
 
    do {
       char l = str.back();
       if(l == '0' && str.length()>1)
           str = str.substr(0,str.length()-1);
       s.insert(str);
       cout<<str<<endl;
    } while (next_permutation(str.begin(), str.end()));

}

int main()
{
	int num;
	cin>>num;

	for (int j = 0; j < num; ++j)
	{
		string str;
		cin>>str;

		set <string> s1;
		int n = str.length();
		for (int i = 0; i < n; i++) 
			for (int len = 1; len <= n - i; len++)
				{
					string subs;
					subs = str.substr(i, len);
//					cout<<subs<<endl;
					permute(subs, s1);
				} 
		cout<<s1.size()<<endl;
	}

	return 0;
}


/*
You are given a number n in hexadecimal. A new number can be made from the number n by selecting any subsequence of it (in HexaDecimal) and rearranging it.
You have tell the number of distinct numbers that can be made from number n.
Since the answer will be very large, output the answer as modulo 10^9+7.
Input:
First Line Consist of T - number of test cases.  Only line of the test case contains a single line containing the input number in hexadecimal
Output
Print the desired output.
Constraints:
1<=T<=10
n<=2^8000 (n in decimal)
Example:
Input:
2
1F
1FF
Output:
4
8
Explanation:
For 1FF possible combinations are - 1,F,1F,F1,FF,1FF,F1F,FF1
*/
