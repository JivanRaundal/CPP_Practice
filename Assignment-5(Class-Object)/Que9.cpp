// Q 9]. Scan details of two students. print them. Do not waste memory while storing name of student.
//       Define member functions of class student outside the class.
// HINT:- Code is same as we used to store string without wasting memory. You just think where to write it.

#include<iostream>
#include<string.h>
using namespace std;

class Student
{
	public:
		char *name;
		int age;
		void scandata();
		void showdata();
		
		//char* get_name();
};

/*char* Student::get_name()
{
	char str[100];
	//cout<<"\nEnter the name : ";
	cin.ignore(1);
	cin.getline(str,98,'\n');
	int length;
	length = strlen(str);
	char *p;
	p = new char[length+1];
	strcpy(p,str);
	return p;
}*/

void Student::scandata()
{
	//cout<<"\nEnter the name : ";
	//name = get_name();
	
	char str[100];
	cout<<"\nEnter the name : ";
	//cin.ignore(1);
	cin.getline(str,98,'\n');
	int length;
	length = strlen(str);
	//char *p;
	name = new char[length+1];
	strcpy(name,str);
	
	cout<<"\nEnter the age : ";
	cin>>age;
	
	cin.ignore(1);
}

void Student::showdata()
{
	cout<<"\nName : "<<name;
	cout<<"\nAge : "<<age;
}

int main()
{
	Student S1,S2;
	S1.scandata();
	S2.scandata();
	S1.showdata();
	S2.showdata();
	
	//deleting runtime memory
	delete[] S1.name;
	delete[] S2.name;
	return 0;
}
