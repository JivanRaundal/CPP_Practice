// Q 10]. Scan details of 2 students from user using commandline arguments.
//        Scan full name (firstName,middleName,lastname) of students.

#include<iostream>
#include<cstdlib>	//header file for atoi() function
using namespace std;

class Student
{
	public:
		char name[30];
		int age;
		
		void show()
		{
			cout<<"\nName = "<<name<<"\t\tAge = "<<age;
		}
};

int main(int argc,char *argv[])
{
	if(argc <5)
	{
		cout<<"\nInvalid argument";
		exit(1);
	}
	
	cout<<"\nargc = "<<argc<<endl;
	for(int i=0; i<argc; i++)
	{
		cout<<"argv["<<i<<"] = "<<argv[i]<<endl;
	}
	
	Student S1,S2;
	int k = 0;
	for(int i=1; i<=3; i++)
	{
		char *p = argv[i];
		int j = 0;
		while(*(p+j) != '\0')
		{
			S1.name[k] = *(p+j);
			j++;
			k++;
		}
		S1.name[k] = ' ';
		k++;
	}
	S1.name[k] = '\0';
	S1.age = atoi(argv[4]);
	
	S1.show();
	return 0;
}
