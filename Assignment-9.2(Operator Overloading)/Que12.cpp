// Q 12]. Create 2 runtime objects in main(). scan & print their details using constructor & destructor.

#include<iostream>
using namespace std;

class Student
{
		char name[30];
		int age;
	public:
		Student()
		{
			cout<<"\nEnter Name : ";
			cin.getline(name,28,'\n');
			cout<<"\nEnter Age : ";
			cin>>age;
			cin.ignore(1);
		}
		~Student()
		{
			cout<<"\nNme = "<<name<<"\tAge = "<<age;
		}
};

int main()
{
	Student *p;
	p = new Student[2];		//creating 2 runtime objects
	
	delete[] p;
	return 0;
}
