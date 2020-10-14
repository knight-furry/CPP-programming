#include<iostream>
#include<string.h>
class parent
{
	double a;
	protected:
	long b;
	public:
	int c;
	char aa[9];
	
	void get()
	{
		a=40;
		b=50;
		c=60;
		strcpy(aa,"data");
	}
	
	void display()
	{
		std::cout<<a<<"\n"<<b<<"\n"<<c<<"\n"<<aa<<"\n";
	}
};


int main()
{
	parent p;
	p.get();
	p.display();
	
	int *ptr;
	ptr = reinterpret_cast <int*> (&p);
	
	std::cout<<"address is:"<<ptr<<"\n";
	std::cout<<"address is:"<<(ptr+1)<<"\n";
	std::cout<<"address is:"<<(ptr+2)<<"\n";
	
	*(ptr+4)=1000;
	*(ptr)=2000;
	std::cout<<"change value is:"<<*(ptr+4)<<"\n";
	std::cout<<"change value is:"<<*(ptr)<<"\n";
	p.display();
	
	std::cout<<"Size of p is:"<<sizeof(p)<<"\n";
	std::cout<<"Size of a is:"<<sizeof(p.c)<<"\n";
	
	return 0;
}
