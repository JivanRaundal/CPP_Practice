// Q 8]. 

#include<iostream>
using namespace std;

class Employee
{
	public:
		char name[20];
		int salary;
		
		void scan()
		{
			cout<<"\n\nEnter Name : ";
			cin.getline(name,18,'\n');
			cout<<"\nEnter salaray : ";
			cin>>salary;
			cin.ignore(1);
		}
		void print()
		{
			cout<<"\nName = "<<name<<"\tSalary = "<<salary;
		}
};

int main()
{
	Employee E[5];	//array of objects
	int i,j;
	cout<<"\nEnter details\n";
	for(i=0; i<5; i++)
	{
		E[i].scan();
	}
	
	Employee Temp;
	Temp.salary = E[0].salary;
	for(i=0; i<5; i++)
	{
		if(E[i].salary > Temp.salary)
		{
			Temp = E[i];
		}
	}
	cout<<"\n\nEmployee with maximum salary : ";
	Temp.print();
	return 0;
}
