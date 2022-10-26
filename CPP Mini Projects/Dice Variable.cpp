// DICE variable

#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;

int main()
{
	int dice;
	char ch;
	
	cout<<"\n\n____________Welcome to dice rolling game____________\n";
	
	while(1)
	{
		cout<<"\n\nDo you wan to roll dice? (y/n) : ";
		cin>>ch;
		if(ch=='n' || ch=='N')
		{
			break;
		}
		srand(time(0));            // to generate time in seconds
		dice = rand()%6+1;       // to generate random number between 1 to 6  // rand() fn generates random no.
		
		switch(dice)
		{
			case 1:
				cout<<"\n	";
				cout<<"\n * ";
				cout<<"\n	";
				break;
				
			case 2:
				cout<<"\n*	";
				cout<<"\n	";
				cout<<"\n  *";
				break;
				
			case 3:
				cout<<"\n*	";
				cout<<"\n * ";
				cout<<"\n  *";
				break;
			
			case 4:
				cout<<"\n* *";
				cout<<"\n  ";
				cout<<"\n* *";
				break;
			
			case 5:
				cout<<"\n* *";
				cout<<"\n *  ";
				cout<<"\n* *";
				break;
				
			case 6:
				cout<<"\n***";
				cout<<"\n   ";
				cout<<"\n***";
				break;
		}
	}
	cout<<"\n\nThanks for playing... hope you enjoyed it!";
	return 0;
}
