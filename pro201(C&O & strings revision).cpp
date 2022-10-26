//  			CLASS & OBJECT

#include<iostream>
using namespace std;

class Student
{
	public:
		char name[30];
		int age;
};

int main()
{
	Student S1,S2;
	
	cout<<"\nEnter details for S1\n";
	cout<<"\nEnter name : ";
	cin.getline(S1.name,28,'\n');
	cout<<"\nEnter age : ";
	cin>>S1.age;
	cin.ignore(1);
	
	cout<<"\nEnter details for S2\n";
	cout<<"\nEnter name : ";
	cin.getline(S2.name,28,'\n');
	cout<<"\nEnter age : ";
	cin>>S2.age;
	
	cout<<"\n\nStudents Details\n";
	cout<<"\nS1 :";
	cout<<"\nName = "<<S1.name<<"\tAge = "<<S1.age;
	cout<<"\n\nS2 :";
	cout<<"\nName = "<<S2.name<<"\tAge = "<<S2.age;
	return 0;
}
