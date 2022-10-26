// Q 18] Define a class student with following members Name, birth_date, marks. Create a database of 3 students.
//       print all those students whose birth_day comes in the month of february.
//       Use concept of composition.

#include<iostream>
#include<string.h>
using namespace std;

class Date
{
	public:
		int day;
		int month;
		int year;
};

class Student
{
	private:
		char name[20];
		int marks;
		Date birth_day;	//composition - creating object of one class in another class as a datamember.
	
	public:	
		void scan()
		{
			cout<<"\nEnter Name : ";
			cin.getline(name,18,'\n');
			cout<<"\nEnter Marks (out of 100) : ";
			cin>>marks;
			cout<<"\nEnter birth date (dd-mm-yy) : ";
			cin>>birth_day.day>>birth_day.month>>birth_day.year;
			cin.ignore(1);
		}
		
		void print()
		{
			cout<<"\n\nName       : "<<name;
			cout<<"\nBirth Date : "<<birth_day.day<<"/"<<birth_day.month<<"/"<<birth_day.year;
			cout<<"\nMarks      : "<<marks;
		}
		
		int check_month()
		{
			if(birth_day.month == 2)
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
};

int main()
{
	Student st[3];
	
	int i;
	
	cout<<"\n\nEnter details of students\n";
	for(i=0; i<3; i++)
	{
		cout<<"\nStudent "<<i+1<<" : ";
		st[i].scan();
	}
	cout<<"\n---------------------------------------------------";
	
	cout<<"\n\nList of students";
	for(i=0; i<3; i++)
	{
		st[i].print();
	}
	cout<<"\n---------------------------------------------------";
	
	cout<<"\n\nStudents whose birth day is in february : ";
	for(i=0; i<3; i++)
	{
		if(st[i].check_month())	//i.e if(1){print()}
		{
			st[i].print();
		}
	}
	
	return 0;
}
