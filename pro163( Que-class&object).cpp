// Revision - Class & object
// Q. Complete the following code for given class.
//   Scan details of two students & print them in main() fun only without using any member function.

#include<iostream>
using namespace std;

class Student
{
	public:
		char *name;
		int age;
};

int main()
{
	Student S1,S2;
	S1.name = new char[30];
	S2.name = new char[30];
	
	cout<<"\nScanning details of 1st student :";
	cout<<"\nEnter the name : ";
	cin.getline(S1.name,28);
	cout<<"\nEnter the age : ";
	cin>>S1.age;
	cin.ignore(1);
	
	cout<<"\nScanning details of 2nd student :";
	cout<<"\nEnter the name : ";
	cin.getline(S2.name,28);
	cout<<"\nEnter the age : ";
	cin>>S2.age;
	
	cout<<"\n\nDetails of 1st student are :";
	cout<<"\nName : "<<S1.name;
	cout<<"\nAge : "<<S1.age;
	
	cout<<"\n\nDetails of 2nd student are : ";
	cout<<"\nName : "<<S2.name;
	cout<<"\nAge : "<<S2.age;
	
	delete[] S1.name;
	delete[] S2.name;
	return 0;
}
