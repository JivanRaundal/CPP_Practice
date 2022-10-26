// Q 9]. read file created in Q 8] in reverse order

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
		void print()
		{
			cout<<"\nName = "<<name<<"\t\tAge = "<<age<<"\tSalary = "<<salary;
		}
};

int main()
{
	Employee E;
	fstream fobj;
	fobj.open("Employee_Q8.txt",ios::in | ios::binary);
	if(fobj.fail())
	{
		cout<<"\nCannot Connect";
		exit(1);
	}

	//reading data from file & printing on console using read() fun
	fobj.seekg(0,ios::end);			//move file object at end
	
	fobj.seekg(-sizeof(E),ios::cur);		//move file object at last object position
	fobj.read((char*)&E,sizeof(E));
	E.print();
	
	fobj.seekg(-2*sizeof(E),ios::cur);		//move file object at 2nd last object position
	fobj.read((char*)&E,sizeof(E));
	E.print();
	
	fobj.seekg(-2*sizeof(E),ios::cur);		//move file object at 3rd last object position OR 1st object position
	fobj.read((char*)&E,sizeof(E));
	E.print();
	
	fobj.close();
	return 0;
}
