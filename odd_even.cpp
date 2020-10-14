#include<iostream>
//#include<cstdio>

int main()
{
	int num,i;
	std::cout<<"Enter the number:";
	std::cin>>num;
	
/*	for(i=num;i>2;)
	{
		i=i-2;
	}
*/

//	i=(num/2)*2;

	i=num%2;
	
	if(i==0)
	std::cout<<"The number is even....!\n";
	else
	std::cout<<"The number is odd....!\n";
	
	return 0;
}
