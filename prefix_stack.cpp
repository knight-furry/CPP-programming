#include<iostream>
#include<string.h>
#include<ctype.h>
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
		int x;
		x=data[top];
		top=top-1;
		return x;
	}
};

int evaluate(char x,int op1,int op2)
{
	switch(x)
	{
		case '+':return op1+op2;
		case '-':return op1-op2;
		case '*':return op1*op2;
		case '/':return op1/op2;
	}
}

int main()
{
	stack s;
	char pref[max];
	int i,x,value,op1,op2;
	cout<<"\nEnter the postfix expretion:\n";
	cin>>pref;
	
	for(i=strlen(pref)-1;i>=0;i--)
	{
		x=pref[i];
		if(isdigit(x))
		{
			s.push(x-48);
		}
		else
		{
			op2=s.pop();
			op1=s.pop();
			value=evaluate(x,op1,op2);
			s.push(value);
		}
	}
	cout<<"Result is:"<<s.pop();
	cout<<"\n";
	return 0;
}
