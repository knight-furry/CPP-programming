#include<iostream>
class demo
{
	int x,y,z;
	public:
	demo(int a,int b,int c)
	{
		x = a;
		y = b;
		z = c;
	}
	friend std::ostream& operator<<(std::ostream &out,const demo& other);
};

std::ostream& operator<<(std::ostream &out,const demo& other)
{
	out<<other.x;
	out<<other.y;
	out<<other.z;
	return out;
}

int main()
{
	demo d(10,20,30);
	std::cout<<d;	//d.operator<<(ostream,d)
	return 0;
}
