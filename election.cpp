#include<iostream>

int main()
{
	int choice,ch;
	static int can1,can2,can3,can4,can5,x=0;
	do
	{
		std::cout<<"*****ELECTION********\n";
		std::cout<<"1.Voting\n2.Result\n0.Exit\n";
		std::cout<<"Enter your choice:";
		std::cin>>choice;
		switch(choice)
		{
			case 1:
			do
			{
				std::cout<<"####VOTE######\n";
				std::cout<<"1.Candidate1\n2.Candidate2\n3.Candidate3\n4.Candidate4\n5.Candidate5\n0.Exit\n";
				std::cout<<"Enter your choice to vote any candidate(1-5):";
				std::cin>>ch;
				switch(ch)
				{
					case 1:
						can1++;
						break;
					case 2:
						can2++;
						break;
					case 3:
						can3++;
						break;
					case 4:
						can4++;
						break;
					case 5:
						can5++;
						break;			
					default:
					x++;
				}
			}while(ch !=0);
			break;
			
			case 2:
				std::cout<<"#######RESULT######\n";
				std::cout<<"candidate1: "<<can1<<"\n";
				std::cout<<"candidate2: "<<can2<<"\n";
				std::cout<<"candidate3: "<<can3<<"\n";
				std::cout<<"candidate4: "<<can4<<"\n";
				std::cout<<"candidate5: "<<can5<<"\n";
				std::cout<<"spoile votes: "<<x<<"\n";
			break;
		}
	}while(choice !=0);
	
	return 0;
}
