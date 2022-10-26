//			FILE HANDLING
// # Reading & writing objects to/from file in binary format :-
// Note - use write() & read() functions.

#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;

class Student
{
	public:
		char name[30];
		int age;
		
		void scan()
		{
			cout<<"\nEnter Name : ";
			cin.getline(name,28,'\n');
			cout<<"\nEnter Age : ";
			cin>>age;
			cin.ignore(1);
		}
		void print()
		{
			cout<<"\nName = "<<name<<"\t\tAge = "<<age;
		}
};

int main()
{
	Student S;
	Student var;
	fstream fobj;
fobj.open("C:\\Users\\Jivan\\OneDrive\\Desktop\\cpp class\\file_handling_txt\\pro334.txt",ios::in|ios::out|ios::binary);
	if(fobj.fail())
	{
		cout<<"\nCannot Connect";
		exit(1);
	}
	
	//scan data from console & write it in file using write() function
	S.scan();
	fobj.write((char*)&S,sizeof(S));
	fobj.seekg(0,ios::beg);		//OR fobj.seekg(-sizeof(S),ios::cur);
	//read data from file using read() function & print it on file
	fobj.read((char*)&var,sizeof(var));
	var.print();
	
	fobj.close();
	return 0;
}
