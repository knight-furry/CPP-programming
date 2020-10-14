#include<iostream>

class demo
{
	int a, b, c;
	public:
	demo(int p, int q, int r)
	{
		this -> a = p;
		this -> b = q;
		this -> c = r;
	}
	
	friend std::ostream& operator<<(std::ostream& os, demo& other);
};

std::ostream& operator<<(std::ostream& os, demo& other)
{
	os<<other.a;
	os<<other.b;
	os<<other.c;
	return os;
}

int main()
{
	demo d1(10, 20, 30);
	std::cout<<d1<<std::endl;
	
	return 0;
}
