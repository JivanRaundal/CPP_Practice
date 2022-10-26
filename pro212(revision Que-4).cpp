//	Revision:-
// Q. Array of objects - search the name entered by user in student database. 

#include<iostream>
#include<string.h>
using namespace std;

class Student
{
	public:
		char name[30];
		int age;
		
		void scan()
		{
			cout<<"\n\nEnter Name : ";
			cin.getline(name,28,'\n');
			cout<<"\nEnter Age : ";
			cin>>age;
			cin.ignore(1);
		}
		
		void print()
		{
			cout<<"\n\nName = "<<name<<"\tAge = "<<age;
		}
};

int main()
{
	Student std[5];	//array of objects
	
	int i;
	//scanning
	for(i=0; i<5; i++)
	{
		std[i].scan();
	}
	//printing
	for(i=0; i<5; i++)
	{
		std[i].print();
	}
	
	//searching
	char str[30];
	cout<<"\n\nEnter the name of student to be searched : ";
	cin.getline(str,28,'\n');
	int x;
	for(i=0; i<5; i++)
	{
		x = strcmp(std[i].name, str);
		if(x==0)
		{
			cout<<"\nStudent Found";
			std[i].print();
			break;
		}
	}
	if(i==5)
	{
		cout<<"\nStudent Not Found";
	}
	return 0;
}
