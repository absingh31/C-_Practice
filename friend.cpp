// #include<iostream>

// using namespace std;


// class crap
// {
// 	int a,b;
// public:
// 	void setData(int x, int y);
// 	void showData();
// 	friend int add(crap);
// 	friend ostream &operator << (ostream &output, crap &co);
// 	friend istream &operator >> (istream &input, crap &co);
// 	friend class test;
// };

// void crap::setData(int x, int y)
// {
// 	a = x; b = y;
// }

// void crap::showData()
// {
// 	cout<<a<<endl<<b<<endl;
// }

// int add(crap c)
// {
// 	int x;
// 	x = c.a + c.b;
// 	return x;
// }

// istream &operator >> (istream &input, crap &co)
// {
// 	input>>co.a>>co.b;
// 	return input;
// }

// ostream &operator << (ostream &output, crap &co)
// {
// 	output<<"hehe!! this is shit"<<endl;
// 	output<<co.a<<co.b<<endl;
// 	return output;
// }

// class test
// {
// 	int he, ho;
// public:
// 	void compute(crap c)
// 	{
// 		he = c.a + c.b;
// 		ho = c.a - c.b;
// 		cout<<he<<endl<<ho<<endl;
// 	}
// };

// class hehe
// {
// 	int oh;
// 	test t;
// };

// int main()
// {
// 	crap c;
// 	cin>>c;
// 	cout<<c;
// 	test t;
// 	t.compute(c);
// 	cout<<c;
// 	hehe h;
// 	return 0;
// }
#include<iostream> 
using namespace std; 
class Base
{ protected: int a; public: Base() {a = 0;} }; 
class Derived1: virtual public Base 
{ public: int c; }; 
class Derived2: virtual public Base 
{ public: int c; }; 
class DerivedDerived: public Derived1, public Derived2 
{ public: void show() { cout << a; } }; 
int main(void) 
{ DerivedDerived d; d.show(); return 0; } 