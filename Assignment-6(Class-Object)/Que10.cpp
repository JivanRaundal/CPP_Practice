// Q 10] for a given class, scan details of 2 students. print them. swap them. Again print them. In main().

#include<iostream>
using namespace std;

class Student
{
	public:
		char name[20];
		int age;
		int roll;
};

int main()
{
	Student s1,s2;
	Student temp;
	
	cout<<"\nEnter data for first student\n";
	cout<<"\nEnter Name : ";
	cin.getline(s1.name,18,'\n');
	cout<<"\nEnter Roll No : ";
	cin>>s1.roll;
	cout<<"\nEnter Age : ";
	cin>>s1.age;
	
	cin.ignore(1);
	cout<<"\n\nEnter data for second student\n";
	cout<<"\nEnter Name : ";
	cin.getline(s2.name,18,'\n');
	cout<<"\nEnter Roll No : ";
	cin>>s2.roll;
	cout<<"\nEnter Age : ";
	cin>>s2.age;
	
	cout<<"\n\nPrinting Data Before Swapping\n";
	cout<<"\nFirst Student\n";
	cout<<"\nName = "<<s1.name;
	cout<<"\nRoll No = "<<s1.roll;
	cout<<"\nAge = "<<s1.age;
	
	cout<<"\n\nSecond Student\n";
	cout<<"\nName = "<<s2.name;
	cout<<"\nRoll No = "<<s2.roll;
	cout<<"\nAge = "<<s2.age;
	
	//swapping details of s1 & s2
	temp = s1;
	s1 = s2;
	s2 = temp;
	
	cout<<"\n\nPrinting Data After Swapping\n";
	cout<<"\nFirst Student\n";
	cout<<"\nName = "<<s1.name;
	cout<<"\nRoll No = "<<s1.roll;
	cout<<"\nAge = "<<s1.age;
	
	cout<<"\n\nSecond Student\n";
	cout<<"\nName = "<<s2.name;
	cout<<"\nRoll No = "<<s2.roll;
	cout<<"\nAge = "<<s2.age;
	
	return 0;
}
