#include<iostream>
const int c=10;
class demo
{
	int a;
	const int b;
	public:
	demo():b(30)
	{
		a=20;
	}
	void get()
	{
		std::cout<<"Enter the value of a:"<<a<<b;
		
	}
	
};

int main()
{
	std::cout<<c<<"\n";
	const demo d;
	d.get();
		
	return 0;
}
