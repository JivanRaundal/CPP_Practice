//			FILE HANDLING
// Q. Writing Data in Sequential file :-
// Note - We always need sepaerator (i.e. '\n' or endl) after we write each datamember in sequential file.
// In sequential file data is written in Text Mode.
// eg - 

#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;

class Student
{
	public:
		char name[30];
		int age;
		
		void getdata()
		{
			cout<<"\nEnter Name : ";
			cin.getline(name,28,'\n');
			cout<<"\nEnter Age : ";
			cin>>age;
			cin.ignore(1);
		}
};

int main()
{
	fstream fobj;
fobj.open("C:\\Users\\Jivan\\OneDrive\\Desktop\\cpp class\\file_handling_txt\\pro335.txt",ios::in|ios::out|ios::trunc);
	if(fobj.fail())
	{
		cout<<"\nNot connected";
		exit(1);
	}
	cout<<"\nConnected";
	
	Student S;
	int i;
	for(i=0; i<3; i++)
	{
		S.getdata();
		fobj<<S.name<<"\n";
		fobj<<S.age<<"\n";	// '\n' is seperator
	}
	
	fobj.seekg(0,ios::beg);
	
	char _name[30];
	int _age;
	for(i=0; i<3; i++)
	{
		fobj.getline(_name,28,'\n');
		fobj>>_age;
		fobj.ignore(1);
		
		cout<<"\nName = "<<_name<<"\t\tAge = "<<_age;
	}
	
	fobj.close();
	return 0;
}
