#include<iostream>
#include<string.h>
#include<math.h>
#define max 50
using namespace std;
class stack
{
	int data[max];
	int top;
	public:
	stack()
	{
		top=-1;
	}
	
	int empty()
	{
		if(top==-1)
		return 1;
		return 0;
	}
	
	int full()
	{
		if(top==max-1)
		return 1;
		return 0;
	}
	
	void push(int x)
	{
		if(!full())
		{
			top=top+1;
			data[top]=x;
		}
		else
		{
			cout<<"Stack is full.....\n";
		}
	}
	
	int pop()
	{
		if(!empty())
		{
			int x;
			x=data[top];
			top=top-1;
			return x;
		}
		else
		{
			cout<<"Stack is empty....!\n";
		}
	}
};



int main()
{
	stack s;
	char bin[max];
	int i,x,value,sum=0;
	cout<<"\nEnter the Binary number:\n";
	cin>>bin;
	
	for(i=0;i<strlen(bin);i++)
	{
		x=bin[i];
		s.push(x-48);
	}
	i=0;
	while(!s.empty())
	{
		sum=sum+(s.pop()*pow(2,i));
		i++;
	}
	cout<<"Result in Decimal number is:"<<sum;
	cout<<"\n";
	return 0;
}
