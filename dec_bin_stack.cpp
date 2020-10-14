#include<iostream>
#define max 10
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
		top=top+1;
		data[top]=x;
	}
	
	int pop()
	{
		int x=data[top];
		top=top-1;
		return x;
	}
};

int main()
{
	stack s;
	int x;
	cout<<"Enter decimal number to convert into binary number:";
	cin>>x;
	
	while(x!=0)
	{
		if(!s.full())
		{
			s.push(x%2);
			x=x/2;
		}
		else
		{
			cout<<"stack is full.......!\n";
		}
	}
	cout<<"The binary result is:";
	
	while(!s.empty())
	{
		cout<<s.pop();
	}
	cout<<endl;
}

