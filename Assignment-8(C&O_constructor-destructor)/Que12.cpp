// Q 12]. Create a database of 6 students containing name, age, marks of students.
//        Print all the students in ascending order by name. (sort array of objects)

#include<iostream>
#include<string.h>
using namespace std;

class Student
{
	public:
		char name[30];
		int  age;
		int  marks;
		
		void scan()
		{
			cout<<"\nEnter Name : ";
			cin.getline(name,28,'\n');
			cout<<"\nEnter Age : ";
			cin>>age;
			cout<<"\nEnter Marks : ";
			cin>>marks;
			cin.ignore(1);
		}
		void print()
		{
			cout<<"\nName = "<<name<<"\t\tAge = "<<age<<"\tMarks = "<<marks;
		}
};

int main()
{
	Student St[6];	//array of objects
	cout<<"\nEnter Details\n";
	int i,j;
	for(i=0; i<6; i++)
	{
		cout<<"\nStudent "<<i+1<<" : ";
		St[i].scan();
	}
	
	cout<<"\n\nList of students befor Sorting\n";
	for(i=0; i<6; i++)
	{
		cout<<"\nStudent "<<i+1<<" : ";
		St[i].print();
	}
	
	//sorting list of students in ascending order or their names
	int x;
	Student temp;
	for(i=0; i<6; i++)
	{
		for(j=i+1; j<6; j++)
		{
			x = strcmp(St[i].name, St[j].name);
			if(x==1)	//x=1 means ith string is greater than jth string
			{
				temp  = St[i];
				St[i] = St[j];
				St[j] = temp;
			}
		}
	}
	cout<<"\n\nList of students after Sorting\n";
	for(i=0; i<6; i++)
	{
		cout<<"\nStudent "<<i+1<<" : ";
		St[i].print();
	}
	
	return 0;
}
