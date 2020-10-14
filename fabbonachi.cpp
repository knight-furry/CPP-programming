#include<iostream>
//#include<cstdio>
//#include<math.h>

int main()
{
	int num,temp,m,n;
	n=1;
	std::cout<<"Enter the numbers to find fabbonachi series:";
	std::cin>>num;
	std::cout<<"The fabbonachi series is:\n";

	for(m=0;m<=num;)
	{
		std::cout<<m<<"\t";
		temp=m+n;
		m=n;
		n=temp;
	}
	std::cout<<"\n";
	return 0;
}
