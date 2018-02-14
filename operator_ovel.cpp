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
		
		Number operator -()
		{
			Number p;
			p.a = (-1)*a;
			p.b = (-1)*b;
			return p;
		}
		
		Number operator +(Number& n)
		{
			Number temp;
			temp.a = n.a + a;
			temp.b = n.b + b;
			return temp;
		}
		
		Number operator ++()
		{
			Number temp;
			temp.a = ++a;
			temp.b = ++b;
			return temp;
		}
		
		Number operator ++(int)
		{
			Number temp;
			temp.a = a++;
			temp.b = b++;
			return temp;
		}
		istream 
};


class complex
{
	int real, imag;

};


int main()
{
	Number n1,n2,neg,incopr,add;
	n1.setData(4,5);
	n2.setData(4,5);
	neg = n1.operator-();     // IN BINARY OBJ CALLER IS ALWAYS ON THE LEFT
	neg.showData();
	incopr = n1++;
	incopr.showData();
	n1.showData();
	add = n1 + n2;
	add.showData();
}