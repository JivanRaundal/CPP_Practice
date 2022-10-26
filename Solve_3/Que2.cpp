// Q 2].

#include<iostream>
using namespace std;

class Student
{
		char name[20];
		int age;
	public:
		static void scan(Student & T)
		{
			cout<<"\n\nEnter Name : ";
			cin.getline(T.name,18,'\n');
			cout<<"\nEnter Age : ";
			cin>>T.age;
			cin.ignore(1);
		}
		static void show(Student T)
		{
			cout<<"\n\nName = "<<T.name<<"\tAge = "<<T.age;
		}
};

int main()
{
	Student S1,S2;
	Student::scan(S1);
	Student::scan(S2);
	Student::show(S1);
	Student::show(S2);
	return 0;
}
