#include<iostream>

int main()
{
	int num,i=2,temp;
	std::cout<<"Enter the numbers to find factors:";
	std::cin>>num;
	temp=num;
	std::cout<<"The factors of number are:\n1\t";

	while(num != 0 && i<=num)
	{
		if(num%i==0)
		{
			std::cout<<i<<"\t";
			num=num/i;
			i=2;
		}
		else
		i++;
	}
	std::cout<<temp<<"\n";
	return 0;
}
