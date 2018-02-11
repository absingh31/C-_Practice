#include<iostream>

using namespace std;


class crap
{
	int a,b;
public:
	void setData(int x, int y);
	void showData();
	friend int add(crap c);
	friend ostream &operator << (ostream &output, crap &co);
	friend istream &operator >> (istream &input, crap &co);
};

void crap::setData(int x, int y)
{
	a = x; b = y;
}

void crap::showData()
{
	cout<<a<<endl<<b<<endl;
}

int add(crap c)
{
	int x;
	x = c.a + c.b;
	return x;
}


istream &operator >> (istream &input, crap &co)
{
	input>>co.a>>co.b;
	return input;
}

ostream &operator << (ostream &output, crap &co)
{
	output<<"hehe!! this is shit"<<endl;
	output<<co.a<<co.b<<endl;
	return output;
}

int main()
{
	crap c;
	cin>>c;
	cout<<c;
	return 0;
}
