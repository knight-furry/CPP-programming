#include<iostream>

int main()
{
	int num,temp,m,n;
	std::cout<<"Enter the numbers to find prime numbers upto:";
	std::cin>>num;
	std::cout<<"The prime series is:\n";

	for(int i=1;i<=num;i++)
	{
		temp=i;
		int flag=0;
		for(int j=1;j<=temp;j++)
		{
			if(temp%j==0)
			{
				flag++;
			}
		}
		
		if(flag==2)
		std::cout<<i<<"\t";
	}
	std::cout<<"\n";
	return 0;
}
