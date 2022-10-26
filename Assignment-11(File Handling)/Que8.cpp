// Q 8].

#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;

class Employee
{
	private:
		char name[30];
		int age;
		int salary;
	public:
		void scan()
		{
			cout<<"\nEnter Name : ";
			cin.getline(name,28,'\n');
			cout<<"\nEnter Age : ";
			cin>>age;
			cout<<"\nEnter Salary : ";
			cin>>salary;
			cin.ignore(1);
		}
		
		void print()
		{
			cout<<"\nName = "<<name<<"\t\tAge = "<<age<<"\tSalary = "<<salary;
		}
};

int main()
{
	Employee E1;
	Employee E2;
	fstream fobj;
	fobj.open("Employee_Q8.txt",ios::in | ios::out | ios::binary);
	if(fobj.fail())
	{
		cout<<"\nCannot Connect";
		exit(1);
	}
	
	//scannig data from console & writing in file using write() fun
	E1.scan();
	fobj.write((char*)&E1,sizeof(E1));
	E1.scan();
	fobj.write((char*)&E1,sizeof(E1));
	E1.scan();
	fobj.write((char*)&E1,sizeof(E1));
	
	fobj.seekg(0,ios::beg);		//move file object at start to print
	
	//reading data from file & printing on console using read() fun
	fobj.read((char*)&E2,sizeof(E2));
	E2.print();
	fobj.read((char*)&E2,sizeof(E2));
	E2.print();
	fobj.read((char*)&E2,sizeof(E2));
	E2.print();
	
	fobj.close();
	return 0;
}

