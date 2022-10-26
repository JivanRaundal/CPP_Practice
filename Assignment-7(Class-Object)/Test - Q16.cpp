#include<iostream>
#include<string.h>
using namespace std;

int main()
{
	char name[30];
	int l1,l2;
	
	do
	{
		cout<<"\nEnter First name : ";
		cin.getline(name,28,'\n');
		l1 = strlen(name);
		cout<<"\nl1 = "<<l1;
		name[l1] = ' ';
		//cin.ignore(1);
		cout<<"\nEnter second name : ";
		cin.getline(&name[l1+1],10,'\n');
		l2 = strlen(&name[l1+1]);
		cout<<"\nl2 = "<<l2;
		
		if(l1==0 || l2==0)
		{
			cout<<"\nPlease Enter valid name.";
		}
	}while(l1 == 0 || l2 == 0);
	
	cout<<"\nName = "<<name;
	return 0;
}
