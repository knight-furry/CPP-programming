#include<iostream>
#include<stdio.h>
class demo
{
	public:
	int a, b, *p;
	
	demo()
	{}
	
	demo(int x, int y, int z)
	{
		this -> a = x;
		this -> b = y;
		this -> p = (int*)malloc(sizeof(int));
		*(this -> p) = z;
	}
	
	void display()
	{
		std::cout<<this->a<<"\n"<<this->b<<"\n"<<*(this->p)<<"\n";
	}

	demo(demo& other)
	{
		this -> a = other.a;
		this -> b = other.b;
		this -> p = (int*)malloc(sizeof(int));
		*(this -> p) = *(other.p);
	}
	
	demo& operator=(demo& other)
	{
		this -> a = other.a;
		this -> b = other.b;
		this -> p = (int*)malloc(sizeof(int));
		*(this -> p) = *(other.p);
		return (*this);
	}
	
};

int main()
{
	std::cout<<"object d1:\n";
	demo d1(10, 20, 30);
	d1.display();
	demo d2(d1);
	std::cout<<"object d2:\n";
	d2.display();
	std::cout<<"Some changes in object d2:\n";
	d2.a++;
	d2.b++;
	(*(d2.p))++;
	std::cout<<"object d1:\n";
	d1.display();
	std::cout<<"object d2:\n";
	d2.display();
	
	// Now the concept of oprator overloading
	
	demo d3 = d2;		// that means d3(d1) is deep copy takes place bcos copy constructor is available
	d3.a++;
	d3.b++;
	(*(d3.p))++;
	std::cout<<"object d3:\n";
	d3.display();
	
	demo d4;
	d4 = d3;
	std::cout<<"object d4:\n";
	d4.display();
	std::cout<<"Some changes in object d4:\n";
	(*(d4.p))++;
	std::cout<<"object d3:\n";
	d3.display();
	std::cout<<"object d4:\n";
	d4.display();
}
