// Q 11].

#include<iostream>
using namespace std;

class Student
{
		char name[30];
		int age;
		
	public:
		Student()	// default constructor
		{
			cout<<"\nEnter Name : ";
			cin.getline(name,28,'\n');
			cout<<"\nEnter Age : ";
			cin>>age;
			cin.ignore(1);
		}
		void print()
		{
			cout<<"\nName = "<<name<<"\tAge = "<<age;
		}
};

int main()
{
	Student S1,S2;
	S1.print();
	S2.print();
	return 0;
}
