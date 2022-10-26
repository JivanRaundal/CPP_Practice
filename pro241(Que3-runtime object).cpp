// REVISION:-
// Q. scan & print data for 2 students by creating object's at runtime.
// Note - Always use ->(arrow) operator with pointer to object.

#include<iostream>
using namespace std;

class Student
{
	public:
		char *name;
		int *age;
		
		void scan()
		{
			name = new char[20];
			age = new int();
			
			cout<<"\n\nEnter Name : ";
			cin.getline(name,18,'\n');
			cout<<"\nEnter Age : ";
			cin>>*age;
			cin.ignore(1);
		}
		
		void print()
		{
			cout<<"\nName = "<<name<<"\tAge = "<<*age;
		}
		
		void freememory()
		{
			delete[] name;
			delete age;
		}
};

int main()
{
	Student *p;	//pointer to obbject
	p = new Student[2];	//array of 2 objects
	
	cout<<"\nEnter details for 1st student :";
	(p+0)->scan();
	cout<<"\nEnter details for 2nd student :";
	(p+1)->scan();
	
	cout<<"\n\nPrinting Details\n";
	cout<<"\nStudent 1 : ";
	(p+0)->print();
	cout<<"\nStudent 2 : ";
	(p+1)->print();
	
	//deleting runctime memory
	(p+0)->freememory();
	(p+1)->freememory();
	delete[] p;
	return 0;
}


