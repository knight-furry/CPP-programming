#include<iostream>
using namespace std;
int main()
{
	char name[20];
	int i=0;
	cout<<"Enter any string:\n";
	cin>>name;
	
	try
	{
		while(name[i] != '\0')
		{
			if(name[i] >= '0' && name[i] <= '9')
			{
				throw(name);
			}
			i++;
		}
			cout<<"Given string is:";
			cout<<name<<"\n";
	}
	
	catch(char x[20])
	{
		cout<<"The numbers in string are exception...!\n"<<x<<"\n";
	}
	return 0;
}
