// Q. overload new & delete operator

#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;

class Student
{
	public:
		char name[30];
		int age;
	Student()
	{
		cout<<"\nEnter Name : ";
		cin.getline(name,28);
		cout<<"\nEnter Age : ";
		cin>>age;
		//cin.ignore(1);
	}
	~Student()
	{
		cout<<"\nName = "<<name<<"\rAge = "<<age;
	}
	
	//overloading new operator
	void* operator new(size_t size)
	{
		cout<<"\nOverloaded new operator, size = "<<size;
		void* ptr;
		ptr = malloc(size);
		return ptr;
	}
	
	//overloading delete operator
	void operator delete(void *ptr)
	{
		cout<<"\nOverloaded delete operator";
		free(ptr);
	}
};

int main()
{
	Student *p;
	p = new Student;
	delete p;
}
