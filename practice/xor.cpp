#include <iostream>
#include <bitset>
using namespace std;

int main()
{
	int m,n,c;

	cout<<"Enter the value of c and n : "<<endl;
	cin>>c>>n;

	string s_c = bitset<16>(c).to_string();
	string s_n = bitset<16>(n).to_string();

	cout<<s_c<<"The first position of 1 is : "<<s_c.find_first_of('1')<<endl;
	cout<<s_n<<"The first position of 1 is : "<<s_n.find_first_of('1')<<endl;

	s_n.erase(s_n.begin(), s_n.begin()+s_c.find_first_of('1'));
	s_c.erase(s_c.begin(), s_c.begin()+s_c.find_first_of('1'));

	cout<<s_c<<endl<<s_n<<endl;
	return 0;
}
