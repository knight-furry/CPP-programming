#include<iostream>
#define max 20
using namespace std;
class stack
{
	char data[max];
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
	
	void push(char x)
	{
		top=top+1;
		data[top]=x;
	}
	
	char pop()
	{
		char x=data[top];
		top=top-1;
		return x;
	}
};

int main()
{
	stack s;
	char x[20];
	int i=0;
	cout<<"Enter the any string:";
	fgets(x,sizeof(x),stdin);
	while(x[i]!='\n')
	{
		if(!s.full())
		{
			s.push(x[i]);	
		}
		else
		{
			cout<<"stack is full.......!\n";
		}
		i++;
	}
	cout<<"The reverse result is:";
	
	while(!s.empty())
	{
		cout<<s.pop();
	}
	cout<<endl;
}

