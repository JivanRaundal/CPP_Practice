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
	//Using () syntax of new
	
	Student *p, *q;	//pointers to object
	p = new Student();
	q = new Student();
	
	cout<<"\nEnter Data for First Student : ";
	cout<<"\nEnter Name : ";
	cin.getline(p->name, 18, '\n');
	cout<<"\nEnter Age : ";
	cin>>p->age;
	cin.ignore(1);
	
	cout<<"\nEnter Data for Second Student : ";
	cout<<"\nEnter Name : ";
	cin.getline(q->name, 18, '\n');
	cout<<"\nEnter Age : ";
	cin>>q->age;
	
	cout<<"\n\nStudent's Details :";
	cout<<"\n1) Name = "<<p->name<<"\tAge = "<<p->age;
	cout<<"\n2) Name = "<<q->name<<"\tAge = "<<q->age;
	
	delete[] p;
	delete[] q;
	return 0;
}
