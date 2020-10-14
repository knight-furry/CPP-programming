#include<iostream>

class demo
{
	public:
	int a,b,*p;
	demo()
	{
		std::cout<<"Default\n";
	}
	demo(int x,int y, int z)
	{
		std::cout<<"Parameterize\n";
		a = x;
		b = y;
		p = (int*)malloc(sizeof(int));
		*p = z;
	}
	
	demo(demo& other)
	{
		std::cout<<"DEEP copy\n";
		a = other.a;
		b = other.b;
		p = (int*)malloc(sizeof(int));
		*p = *(other.p);
	}
	
	demo& operator+(const demo& other)
	{
		demo *x;
		x = (demo*)malloc(sizeof(demo));
		std::cout<<"operator fun\n";
		x->a = (this->a)+other.a;
		x->b = (this->b)+other.b;
		x->p = (int*)malloc(sizeof(int));
		*(x->p) = *(this->p)+*(other.p);
		return *x;
	}
	
	demo& operator=(const demo& other)
	{
		std::cout<<"operator fun\n";
		a = other.a;
		b = other.b;
		p = (int*)malloc(sizeof(int));
		*p = *(other.p);
		return *this;
	}
	
};

int main()
{

	demo d1(10,20,30);
	demo d2(d1);
	demo d3=d1;
	demo d4(40,50,60);
	demo d5;
	d5=d1+d4;			//	d5.operator=(d1.operator+(d4));
	std::cout<<d5.a<<"\n"<<d5.b<<"\n"<<*(d5.p)<<"\n";
	return 0;
}
