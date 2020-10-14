#include<iostream>
//#include<cstdio>
#include<math.h>

int main()
{
	int num,i,temp,count,sum,j;
	std::cout<<"Enter the number to get amstrong numbers up to:";
	std::cin>>num;
	std::cout<<"The armstrong numbers are:\n";
	
	for(j=1;j<=num;j++)
	{
		int x=j;
		int y=j;
		sum=0;
		count=0;
		
		while(y!=0)
		{
			count++;
			y=y/10;
		}
		while(x !=0)
		{
			temp=x%10;
			
			sum=	sum + pow(temp,count);
			
			x=x/10;
		}
		
		if(sum==j)
		std::cout<<j<<"\t";
	
	}
	std::cout<<"\n";
	return 0;
}
