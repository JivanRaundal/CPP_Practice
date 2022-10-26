// Q 7].

#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;

class Student
{
	private:
		char name[30];
		int age;
	public:
		void print()
		{
			cout<<"\nName = "<<name<<"\t\tAge = "<<age;
		}
};

int main()
{
	Student obj;
	fstream fobj;
	fobj.open("Student_Q6.txt",ios::in | ios::binary);
	if(fobj.fail())
	{
		cout<<"\nCannot Connect";
		exit(1);
	}
	
	//reading object written in binary format in Student_Q6.txt using read() function & printing on console
	fobj.read((char*)&obj,sizeof(obj));
	obj.print();
	
	fobj.read((char*)&obj,sizeof(obj));
	obj.print();
	
	fobj.read((char*)&obj,sizeof(obj));
	obj.print();
	
	fobj.close();
	return 0;
}
