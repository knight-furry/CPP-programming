#include<iostream>
using namespace std;
class A
{
	double a;
	public:
	A()
	{
		this->a = 1;
	}
};

class B
{
	double b;
	public:
	B()
	{
		this->b = 1;
	}
};

class C
{
	double c;
	public:
	C()
	{
		this->c = 1;
	}
};

class D : public A, public B, public C
{
	double d;
	public:
	D()
	{
		this->d = 1;
	}
};

int main()
{
	D dobj;
	A* aptr = &dobj;
	B* bptr = &dobj;
	C* cptr = &dobj;
	cout<<"Address of dobj: "<<&dobj<<endl;
	cout<<"Address of aptr: "<<aptr<<endl;
	cout<<"Address of bptr: "<<bptr<<endl;
	cout<<"Address of cptr: "<<cptr<<endl;

	return 0;
}
