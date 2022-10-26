//					WHY DESTRUCTORS CAN BE VIRTUAL PRE-REVISION
// # Need of virtual destructor :-
// Note - Which class destructor should be executed will be decided by compiler depending upon the datatype of object
//        going out of scope.
// 1] In follng main() function, pointer ptr is of type Person. ptr can store address of object of Student.
//    (Student is child/derived class of Person & ptr is pointer variable of base class.)
// 2] In statement2, when we try to delete the object, compiler binds here the destructor depending upon the datatype
//    of ptr (compile-time polymorphism) & the datatype of ptr is Person.
// 3] Hence, at statement2 object of class Student gets destroyed. But, destructor for parent class (Person) only 
//    gets executed & not of class Student.. (Bcz, of compile time polymorphism).
// 4] That is why there is a Memmory Leak even after we delete ptr.

#include<iostream>
using namespace std;

class Person
{
	public:
		char * name;
		Person()
		{
			cout<<"\nIn Person default constructor";
			name = new char[30];
			cout<<"\nEnter Name : ";
			cin.getline(name,28,'\n');
		}
		~Person()
		{
			cout<<"\nIn Person destructor";
			delete[] name;
		}
};

class Student : public Person
{
	public:
		int * roll;
		Student()
		{
			cout<<"\nIn Student default constructor";
			roll = new int();
			cout<<"\nEnter Roll : ";
			cin>>*roll;
			cin.ignore(1);
		}
		~Student()
		{
			cout<<"\nIn Student destructor";
			delete roll;
		}
};

int main()
{
	Person * ptr;		//------(1)   Base class pointer
	ptr = new Student();	//creating runtime object of Derived class(Student) & here ptr stores addr of Student class
	delete ptr;			//------(2) Due to this statement destructor for Person class will get called & not of Student
	return 0;
}
