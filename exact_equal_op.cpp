#include<iostream>
class demo
{
	int x,y,z;
	public:
	demo(){}
	demo(int a,int b,int c)
	{
		this->x = a;
		this->y = b;
		this->z = c;
	}
	bool operator==(demo other)
	{
		return (this->x == other.x && this->y == other.y && this->z == other.z);
	}
};

int main()
{
	demo d1(10,20,30);
	demo d2(10,30,20);
	demo d3(10,20,30);
	if(d1 == d2)
	std::cout<<"The Object d1 and d2 are eqaul...!\n";
	else
	std::cout<<"The Object d1 and d2 are  not eqaul...!\n";
	if(d1 == d3)
	std::cout<<"The Object d1 and d3 are eqaul...!\n";
	else
	std::cout<<"The Object d1 and d3 are  not eqaul...!\n";
}
