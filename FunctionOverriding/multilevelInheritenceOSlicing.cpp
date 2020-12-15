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

class B : public A
{
	double b;
	public:
	B()
	{
		this->b = 1;
	}
};

class C : public B
{
	double c;
	public:
	C()
	{
		this->c = 1;
	}
};


int main()
{
	C cobj;
	A* aptr = &cobj;
	B* bptr = &cobj;

	cout<<"Address of dobj: "<<&cobj<<endl;
	cout<<"Address of aptr: "<<aptr<<endl;
	cout<<"Address of bptr: "<<bptr<<endl;

	return 0;
}
