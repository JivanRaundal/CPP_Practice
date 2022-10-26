// Q 4].

#include<iostream>
using namespace std;

class Student
{
	public:
		char *name;
		int  *age;
};

int main()
{
	Student S[4];	//array of objects
	int i;
	cout<<"\nEnter details\n";
	for(i=0; i<4; i++)
	{
		cout<<"\nStudent "<<i+1<<" : ";
		//allocating runtime memory for name & age
		S[i].name = new char[20];
		S[i].age  = new int();
		
		cout<<"\nEnter Name : ";
		cin.getline(S[i].name,18,'\n');
		cout<<"\nEnter Age : ";
		cin>>*S[i].age;
		cin.ignore(1);
	}
	
	cout<<"\n\nPrinting Details\n";
	for(i=0; i<4; i++)
	{
		cout<<"\nStudent "<<i+1<<" : ";
		cout<<"\nName = "<<S[i].name<<"\tAge = "<<*S[i].age;
	}
	
	//deleting runtime memory
	for(i=0; i<4; i++)
	{
		delete[] S[i].name;
		delete S[i].age;
	}
	return 0;
}
