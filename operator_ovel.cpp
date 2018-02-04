#include<iostream>

using namespace std;

class Number
{
	int a, b;

	public:
		void setData(int x, int y)
		{
			a=x, b=y;
		}
		void showData()
		{
			cout<<"a is "<<a<<" b is "<<b<<endl;
		}
		Number operator +(Number nu)
		{
			Number p;
			p.a = a + nu.a;
			p.b = b + nu.b;
			return p;
		}
};

int main()
{
	Number n1,n2,n3;
	n1.setData(4,5);
	n2.setData(4,5);
	n3 = n1 + (n2);
	n3.showData();
}