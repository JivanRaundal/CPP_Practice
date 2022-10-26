// Q 6].

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
		void scan()
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
	Student S;
	fstream fobj;
	fobj.open("Student_Q6.txt",ios::out | ios::binary);
	if(fobj.fail())
	{
		cout<<"\nCannot Connect";
		exit(1);
	}
	//scanning data from console & writing it in file in binary format using write function
	S.scan();
	fobj.write((char*)&S,sizeof(S));
	
	S.scan();
	fobj.write((char*)&S,sizeof(S));
	
	S.scan();
	fobj.write((char*)&S,sizeof(S));
	
	fobj.close();
	return 0;
}

