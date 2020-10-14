#include<iostream>
class demo
{
	int x,y;
	public:
	demo(){}
	demo(int a,int b)
	{
		this->x = a;
		this->y = b;
	}
	
	void operator()()
	{
		std::cout<<"Hiiii,you just overload the parenthesis operator....!\n";
	}
	void operator()(int a)
	{
		std::cout<<"You Enter value is:"<<a<<"\n";
	}
	int operator()(int a,int b)
	{
		return (a+b);
	}
};

int main()
{
	demo d(10,20);
	demo d1,d2,d3;
	d1(100);
	d2();
	int x = d3(40,50);
	std::cout<<"The addition is: "<<x<<"\n";
}
