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
	
	demo& operator=(const demo& other)
	{
		//demo x;
		std::cout<<"operator fun\n";
		a = other.a;
		b = other.b;
		p = (int*)malloc(sizeof(int));
		*(p) = *(other.p);
		//return x;
	}
};

int main()
{

	demo d1(10,20,30);
	demo d2(d1);
	demo d3=d1;
	demo d4;
	d4=d1;
	(*(d1.p))=90;
	
	std::cout<<d4.a<<"\n"<<d4.b<<"\n"<<*(d4.p)<<"\n";
	
	(d4.a)++;
	(d4.b)++;
	(*(d4.p))++;
	std::cout<<d4.a<<"\n"<<d4.b<<"\n"<<*(d4.p)<<"\n";
	std::cout<<*(d1.p)<<"\n";
	return 0;
}
