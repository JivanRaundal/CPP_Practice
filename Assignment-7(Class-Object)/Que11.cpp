// Q 11] create a database of 5 students. Perform the following operations.
//		 1)scan a name from user. check if their is any student with given name.
//         If present print all his details.
//		 2)scan a range of marks from user & print details of those student's who have marks between given range.
//       3)sort your list of students by age in descending order.

#include<iostream>
#include<string.h>
using namespace std;

class Student
{
	public:
		char name[20];
		int age;
		int marks;
		
		void scan()
		{
			cout<<"\n\nEnter Name : ";
			cin.getline(name,18,'\n');
			cout<<"\nEnter age : ";
			cin>>age;
			cout<<"\nEnter Marks : ";
			cin>>marks;
			cin.ignore(1);
		}
		
		void print()
		{
			cout<<"\n\nName : "<<name;
			cout<<"\nAge    : "<<age;
			cout<<"\nMarks  : "<<marks;
		}
};

int main()
{
	Student std[5];	//array of objects
	
	int i,j;
	for(i=0; i<5; i++)
	{
		cout<<"\nEnter details of student "<<i+1;
		std[i].scan();
	}
	
	cout<<"\n\nList of students :\n";
	for(i=0; i<5; i++)
	{
		std[i].print();
	}
	
	int ch;
	do
	{
		cout<<"\n\n______________________MENUE______________________";
		cout<<"\n1. check for particular student.";
		cout<<"\n2. students with given range of marks.";
		cout<<"\n3. sort list in descending order based on age.";
		cout<<"\n4. exit.";
		cout<<"\n_________________________________________________";
		cout<<"\nEnter your choice : ";
		cin>>ch;
		
		switch(ch)
		{
			case 1:
				char search[20];
				cin.ignore(1);
				cout<<"\nEnter the name of student to be searched : ";
				cin.getline(search,18,'\n');
				int x;
				for(i=0; i<5; i++)
				{
					x = strcmp(std[i].name, search);
					if(x==0)
					{
						cout<<"\nStudent Found.";
						std[i].print();
						break;
					}
				}
				if(i==5)
				{
					cout<<"\nStudent Not Found.";
				}
				break;
				
			case 2:
				int a,b;
				cout<<"\nEnter the range of marks : ";
				cin>>a>>b;
				for(i=0; i<5; i++)
				{
					if(std[i].marks > a && std[i].marks < b || std[i].marks < a && std[i].marks > b)
					{
						std[i].print();
					}
				}
				break;
				
			case 3:
				Student temp;
				for(i=0; i<5; i++)
				{
					for(j=i+1; j<5; j++)
					{
						if(std[i].age < std[j].age)	//comparison is based on age but swapping is of objects
						{
							//swapping objects
							temp   = std[i];
							std[i] = std[j];
							std[j] = temp;
						}
					}
				}
				cout<<"\n\nSorted list of students in descending order of age is :";
				for(i=0; i<5; i++)
				{
					std[i].print();
				}
				break;
				
			case 4:
				exit(0);
				
			default:
				cout<<"\nInvalid choice!..Please try again.";
		}
	}while(ch != 4);
	
	return 0;
}
