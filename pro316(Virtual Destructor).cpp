//				RUNTIME POLYMORPHISM
// # Virtual Destructor :-
// Note :- 1] In follng eg, We have made Base class destructor virtual. Hence, at statement2, the binding of destructor
//            will be made at Runtime depending on content of ptr.
//         2] Hence, which destructor is to be executed at statement2 will depend upon content of ptr & not datatype
//            of ptr. (Runtime Polymorphism)

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
		virtual ~Person()		// virtual destructor
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
	delete ptr;			//------(2) destructor will be bind here depending upon content of ptr & not datatype
	return 0;
}
