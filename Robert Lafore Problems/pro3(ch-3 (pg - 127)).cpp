// chapter-3 exercise, page_no - 127, Que_no - 4]

#include<iostream>
using namespace std;

int main()
{
	double n1,n2,ans;
	char oper, ch;
	
	do
	{
		cout<<"\n\nEnter first number, operator, second number : ";
		cin>>n1>>oper>>n2;
	
		switch(oper)
		{
			case '+':
				ans = n1 + n2;
				break;
			case '-':
				ans = n1 - n2;
				break;
			case '*':
				ans = n1 * n2;
				break;
			case '/':
				ans = n1 / n2;
				break;
			default:
				ans = 0;
				cout<<"\nInvalid operator";
		}
		
		cout<<"\n\tAnswer = "<<ans;
		cout<<"\n\nDo another operation (Enter 'y' for Yes & 'n' for No) :\n";
		cin>>ch;
		
	}while(ch != 'n');
	
	return 0;
}
