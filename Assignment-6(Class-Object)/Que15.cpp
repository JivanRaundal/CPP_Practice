// Q 15] Scan details of 2 students & print them for given class.

#include<iostream>
using namespace std;

class Student
{
	private:
		char *name;
		int age;
		
	public:
		static void scandata(Student & S)	//static member function
		{
			S.name = new char[30];
			cout<<"\nEnter Name : ";
			cin.getline(S.name,98,'\n');
			cout<<"\nEnter Age : ";
			cin>>S.age;
			cin.ignore(1);
		}
		
		static void printdata(Student S)	//static member function
		{
			cout<<"\n\nName = "<<S.name<<"\tAge = "<<S.age;
		}
		
		void freememory()
		{
			delete[] name;
		}
};

int main()
{
	Student S1,S2;
	
	Student::scandata(S1);
	Student::scandata(S2);
	
	Student::printdata(S1);
	Student::printdata(S2);
	
	S1.freememory();
	S2.freememory();
	return 0;
}
