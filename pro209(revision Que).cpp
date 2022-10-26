//					CLASS & OBJECT
// Q. complete the following code for given class.

#include<iostream>
using namespace std;

class Student
{
	public:
		char *name;
		int age;
};
//scan & print details in main()
int main()
{
	Student S1,S2;
	
	S1.name = new char[20];
	S2.name = new char[20];
	
	cout<<"\nEnter details for S1\n";
	cout<<"\nEnter Name : ";
	cin.getline(S1.name,18,'\n');
	cout<<"\nEnter Age : ";
	cin>>S1.age;
	cin.ignore(1);
	
	cout<<"\n\nEnter details for S2\n";
	cout<<"\nEnter Name : ";
	cin.getline(S2.name,18,'\n');
	cout<<"\nEnter Age : ";
	cin>>S2.age;
	
	cout<<"\n\nDetails are\n";
	cout<<"\nS1 :";
	cout<<"\nName = "<<S1.name<<"\tAge = "<<S1.age;
	cout<<"\nS2 :";
	cout<<"\nName = "<<S2.name<<"\tAge = "<<S2.age;
	
	delete[] S1.name;
	delete[] S2.name;
	return 0;
}
