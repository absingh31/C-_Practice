// #include<iostream>

// using namespace std;

// class Number
// {
// 	int a, b;

// 	public:
// 		void setData(int x, int y)
// 		{
// 			a=x, b=y;
// 		}
// 		void showData()
// 		{
// 			cout<<"a is "<<a<<" b is "<<b<<endl;
// 		}
		
// 		Number operator -()
// 		{
// 			Number p;
// 			p.a = (-1)*a;
// 			p.b = (-1)*b;
// 			return p;
// 		}
		
// 		Number operator +(Number& n)
// 		{
// 			Number temp;
// 			temp.a = n.a + a;
// 			temp.b = n.b + b;
// 			return temp;
// 		}
		
// 		Number operator ++()
// 		{
// 			Number temp;
// 			temp.a = ++a;
// 			temp.b = ++b;
// 			return temp;
// 		}
		
// 		Number operator ++(int)
// 		{
// 			Number temp;
// 			temp.a = a++;
// 			temp.b = b++;
// 			return temp;
// 		}
// 	// 	istream &operator >> (istream &input, crap &co)
// 	// 	{
// 	// 		input>>co.a>>co.b;
// 	// 		return input;
// 	// 	}

// 	// 	ostream &operator << (ostream &output, crap &co)
// 	// 	{
// 	// 		output<<"hehe!! this is shit"<<endl;
// 	// 		output<<co.a<<co.b<<endl;
// 	// 		return output;
// 	// }	
// };



// int main()
// {
// 	Number n1,n2,neg,incopr,add;
// 	n1.setData(4,5);
// 	n2.setData(4,5);
// 	neg = n1.operator-();     // IN BINARY OBJ CALLER IS ALWAYS ON THE LEFT
// 	neg.showData();
// 	incopr = n1++;
// 	incopr.showData();
// 	n1.showData();
// 	add = n1 + n2;
// 	add.showData();
// }
#include <iostream>
using namespace std;
class Test2
{
    int y;
};
 
class Test
{
    int x;
    Test2 t2;
public:
    operator Test2 ()  { return t2; }
    operator int () { return x; }
};
 
void fun ( int x) { cout << "fun(int) called"; }
void fun ( Test2 t ) { cout << "fun(Test 2) called"; }
 
int main()
{
    Test2 t;
    fun(t);
    return 0;
}