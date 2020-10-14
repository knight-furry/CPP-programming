#include<iostream>

class demo
{
	public:
	
	demo& operator()()
	{
		std::cout<<"Empty function...!"<<std::endl;
		return *this;
	}
	
	demo& operator()(int p)
	{
		std::cout<<p<<std::endl;
		return *this;
	}
	
	demo& operator()(int p, int q)
	{
		std::cout<<p<<std::endl<<q<<std::endl;
		return *this;
	}
	
	demo& operator()(int p, int q, int r)
	{
		std::cout<<p<<std::endl<<q<<std::endl<<r<<std::endl;
		return *this;
	}
};



int main()
{
	demo d1;
	d1()(123, 454,54)(8450, 940)()(100)()()()(324, 234);
	
	return 0;
}
