#include<iostream>

class demo
{
	static int a;
	int b;
	int c;
	public:
	demo()
	{
		b=120;
	}
	static void fun(demo* x)
	{
		a=10;
		//b=20;
		std::cout<<"The value of a and b:"<<a<<"  "<<x->b<<std::endl;
		
		x->gun(x);
	}
	
	void gun(demo* d)
	{
		d->a=100;
		c=90;
		std::cout<<"The updated value of a is:"<<d->a<<std::endl;
		std::cout<<"The updated value of a is:"<<c<<std::endl;
	}
};

int demo :: a=10;

int main()
{
	demo d;
	d.fun(&d);
	d.gun(&d);
	//demo :: fun();
	
	return 0;
}
