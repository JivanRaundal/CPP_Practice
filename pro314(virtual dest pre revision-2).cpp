//					WHY DESTRUCTORS CAN BE VIRTUAL PRE-REVISION
// Note - Which class destructor should be executed will be decided by compiler depending upon the datatype of object
//        going out of scope.
// 1] In follng eg, at statement1 compiler decides that the destructor of class Student will get called here. 
// 2] This decision is made at compile time depending upon datatype of ptr.
// 3] So, at the time of execution, destructor of Student will get executed, then due to inheritance destructors of 
//    all parent classes will get executed.

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
	Student * ptr;		//derived class pointer
	ptr = new Student();	//creating runtime object of Derived class
	delete ptr;			//--------(1) Due to this statement destructor for Student class will get called & after that
						//			  destructor for person will get called.
	return 0;
}
