#include <iostream>

using namespace std;

class Numbers
{
	int a,b,add,sub,mul;
	float div;
public:
	void get();
	void put();
	void addn();
	void subn();
	void muln();
	void divn();
};

inline void Numbers::get()
{
	cout<<"Enter the Numbers"<<endl;
	cin>>a>>b;
}

inline void Numbers::addn()
{
	add = a + b;
}

inline void Numbers::subn()
{
	sub = a - b;
}

inline void Numbers::muln()
{
	mul = a * b;
}

inline void Numbers::divn()
{
	div = ((float)a)/((float)b);
}

inline void Numbers::put()
{
	cout<<"Numbers are\t"<<a<<"\t"<<b<<endl;
	cout<<"Addition : "<<add<<endl;
	cout<<"Substraction : "<<sub<<endl;
	cout<<"Multiplication : "<<mul<<endl;
	cout<<"Division : "<<div<<endl
}

int main()
{
	Numbers n;
	n.get();
	n.addn();
	n.subn();
	n.muln();
	n.divn();
	n.put();

	return 0;
}