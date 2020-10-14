#include<iostream>
class demo
{
	public:
	int x,y,z;
	demo(int a,int b,int c)
	{
		x = a;
		y = b;
		z = c;
	}
	friend demo& operator>>(std::istream &out,demo &other);
};

demo& operator>>(std::istream &out,demo &other)
{
	out>>other.x;
	out>>other.y;
	out>>other.z;
	return other;
}

int main()
{
	demo d(10,20,30);
	std::cin>>d;
	std::cout<<"Now updated values are:"<<d.x<<"\t"<<d.y<<"\t"<<d.z<<"\n";
	return 0;
}
