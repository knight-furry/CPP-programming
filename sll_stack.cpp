#include<iostream>
using namespace std;

struct node
{
	char data;
	struct node* next;
};

class stack
{
	struct node* top=NULL;
	public:
	stack()
	{
		top=NULL;
	}
	
	int empty()
	{
		if(top==NULL)
		return 1;
		return 0;
	}
	
	
	void push(char x)
	{
		struct node* p;
		p=new (node);
		p->data=x;
		p->next=top;
		top=p;
	}
	
	char pop()
	{
		char x;
		struct node* p=top;
		x=p->data;
		top=top->next;
		delete(p);
		return x;
	}
};

int main()
{
	stack s;
	char x;
	cout<<"Enter the charactor:";
	cin>>x;
	while(getchar()!='\n')
	{
		s.push(x);
	}
	
	cout<<"Result is:";
	while(!s.empty())
	{
		cout<<s.pop();
	}
	cout<<"\n";
	return 0;
}
