//					WHY DESTRUCTORS CAN BE VIRTUAL PRE-REVISION
// Revision :-

#include<iostream>
using namespace std;

class person
{
	public:
		char * name;
		person()
		{
			cout<<"\nIn person default constructor";
			name = new char[30];
			cout<<"\nEnter Name : ";
			cin.getline(name,28,'\n');
		}
		~person()
		{
			cout<<"\nIn person destructor";
			delete[] name;
		}
};

class Student : public person
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
	{
		Student obj;
	}
	return 0;
}
