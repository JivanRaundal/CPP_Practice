// REVISION:-
// Q. scan & print data for 2 students by creating object's at runtime.
// Note - Always use ->(arrow) operator with pointer to object.

#include<iostream>
using namespace std;

class Student
{
	public:
		char name[20];
		int age;
};

int main()
{
	//using [] syntax of new (We have to use pointer arithmetic here)
	Student * p;	//pointer to object
	p = new Student[2];	//array of 2 objects
	
	cout<<"\nEnter Data for First Student : ";
	cout<<"\nEnter Name : ";
	cin.getline((p+0)->name, 18, '\n');
	cout<<"\nEnter Age : ";
	cin>>(p+0)->age;
	cin.ignore(1);
	
	cout<<"\nEnter Data for Second Student : ";
	cout<<"\nEnter Name : ";
	cin.getline((p+1)->name, 18, '\n');
	cout<<"\nEnter Age : ";
	cin>>(p+1)->age;
	
	cout<<"\n\nStudent's Details :";
	cout<<"\n1) Name = "<<(p+0)->name<<"\tAge = "<<(p+0)->age;
	cout<<"\n2) Name = "<<(p+1)->name<<"\tAge = "<<(p+1)->age;
	
	delete[] p;
	return 0;
}
