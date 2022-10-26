// Q 9].

#include<iostream>
#include<string.h>
using namespace std;

class Student
{
	public:
		char name[30];
		int age;
		int roll;
		
		void scan()
		{
			cout<<"\nEnter Name : ";
			cin.getline(name,28,'\n');
			cout<<"\nEnter Roll No : ";
			cin>>roll;
			cout<<"\nEnter Age : ";
			cin>>age;
			cin.ignore(1);
		}
		void print()
		{
			cout<<"\nName = "<<name<<"\tRoll No = "<<roll<<"\tAge = "<<age;
		}
};

int main()
{
	Student St[5];	//array of object
	int i,j;
	
	cout<<"\nEnter details\n";
	for(i=0; i<5; i++)
	{
		cout<<"\nStudent "<<i+1<<" : ";
		St[i].scan();
	}
	
	int ch;
	Student temp;
	int x;
	
	do
	{
		cout<<"\n\n__________MENUE__________";
		cout<<"\n1. sort by age.";
		cout<<"\n2. sort by roll.";
		cout<<"\n3. sort by name.";
		cout<<"\n4. exit.";
		cout<<"\n_________________________";
		cout<<"\nEnter Youe Choice : ";
		cin>>ch;
		
		switch(ch)
		{
			case 1:
				for(i=0; i<5; i++)
				{
					for(j=i+1; j<5; j++)
					{
						if(St[i].age > St[j].age)
						{
							temp = St[i];
							St[i] = St[j];
							St[j] = temp;
						}
					}
				}
				cout<<"\nSorted List Of students by age : ";
				for(i=0; i<5; i++)
				{
					St[i].print();
				}
				break;
				
			case 2:
				for(i=0; i<5; i++)
				{
					for(j=i+1; j<5; j++)
					{
						if(St[i].roll > St[j].roll)
						{
							temp = St[i];
							St[i] = St[j];
							St[j] = temp;
						}
					}
				}
				cout<<"\nSorted List Of students by age : ";
				for(i=0; i<5; i++)
				{
					St[i].print();
				}
				break;
				
			case 3:
				for(i=0; i<5; i++)
				{
					for(j=i+1; j<5; j++)
					{
						x = strcmp(St[i].name,St[j].name);
						if(x==1)	//string 1 is greater than string 2 if x=1
						{
							temp = St[i];
							St[i] = St[j];
							St[j] = temp;
						}	
					}	
				}
				cout<<"\nSorted List Of students by Name : ";
				for(i=0; i<5; i++)
				{
					St[i].print();
				}
				break;
				
			case 4:
				exit(0);
				
			default:
				cout<<"\nInvalid choice!...Plz Try Again.";						
		}
	}while(ch != 4);
	return 0;
}
