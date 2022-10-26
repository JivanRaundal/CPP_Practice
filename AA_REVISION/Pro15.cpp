

#include<iostream>
using namespace std;

class Student
{
	private:
		char * name;
		int roll;
		int * age;
		static int code;
	public:
		Student()
		{
			name = new char[30];
			age = new int();
		}
		~Student()
		{
			delete[] name;
			delete age;
		}
		void getData()
		{
			cout<<"\nEnter Name : ";
			cin.getline(name,28,'\n');
			cout<<"\nEnter Roll : ";
			cin>>roll;
			cout<<"\nEnter Age  : ";
			cin>>*age;
			cin.ignore(1);
		}
		void showData()
		{
			cout<<"\n\nName = "<<name;
			cout<<"\nRoll = "<<roll;
			cout<<"\nAge  = "<<*age;
			cout<<"\nCode = "<<code;
		}
		static void myfun()
		{
			Student S[2];
			S[0].getData();
			S[1].getData();
			S[0].showData();
			S[1].showData();
		}
};

int Student::code = 423301;

int main()
{
	Student::myfun();
	return 0;
}
