#include<iostream>
class demo
{
	int length , p[5];
	public:
	demo(int l)
	{
		length = l;
	}
	int& operator[](int i);
};

int& demo::operator[](int i)
{
	if( i >= 0 && i< length)
	return this->p[i];
}

int main()
{
	demo d(5);
	for(int i=0;i<5;i++)
	{
		d[i] = i;
	}
	
	std::cout<<d[3]<<"\n";
	return 0;
}
