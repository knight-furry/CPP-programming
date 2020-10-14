#include<iostream>
using namespace std;
class demo
{
	public:
	
	int x,y,*p;
	demo(int a,int b,int c)
	{
		this->x = a;
		this->y = b;
		this->p=(int*)malloc(sizeof(int));
		*(this->p)=c;
	}
	
	
	demo(demo& other)
	{
		this-> x = other.x;
		this-> y = other.y;
		this-> p = (int*)malloc(sizeof(int));
		*(this-> p)=*(other.p);
	}

};

int main()
{
	demo d(10,20,30);
	cout<<d.x<<"\n"<<d.y<<"\n"<<*(d.p)<<"\n";
	d.y=666;
	demo d2(d);
	cout<<d2.x<<"\n"<<d2.y<<"\n"<<*(d2.p)<<"\n";
	*(d2.p) =400;
	
	
	demo d1(d);
	*(d1.p) =90;
	cout<<d1.x<<"\n"<<d1.y<<"\n"<<*(d1.p)<<"\n\n";
		
}
