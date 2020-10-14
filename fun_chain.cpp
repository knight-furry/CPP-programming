#include<iostream>

class demo
{
	public:
	int a,b,*p;
	demo()
	{
		std::cout<<"Default\n";
	}
	demo& fun()
	{
		std::cout<<"The fun function called....!\n";
		return *this;
	}
	demo& gun()
	{
		std::cout<<"The gun function called...!\n";
		return *this;
	}
	demo& run()
	{
		std::cout<<"The run function called...!\n";
		return *this;
	}
};

int main()
{

	demo d1;
	d1.fun().gun().run();
	return 0;
}
