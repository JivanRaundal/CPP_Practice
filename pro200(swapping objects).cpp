// 					CLASS & OBJECT
// Array of objects & swapping arrays:-
// Q. scan name & salary of 6 employee's & sort them according to increasing salary in main() function only.

#include<iostream>
using namespace std;

class Employee
{
	public:
		char name[30];
		int salary;
};

int main()
{
	Employee Emp[6];	//array of objects
	
	int i,j;
	Employee temp;
	
	//scanning
	for(i=0; i<6; i++)
	{
		cout<<"\n\nEmployee "<<i<<" :";
		
		cout<<"\nEnter Name : ";
		cin.getline(Emp[i].name,28,'\n');
		cout<<"\nEnter Salary : ";
		cin>>Emp[i].salary;
		
		cin.ignore(1);
	}
	
	/*sorting according to increasing salary
	  Note - here, comparison is based on salary but swapping is of objects*/
	for(i=0; i<6; i++)
	{
		for(j=i+1; j<6; j++)
		{
			if(Emp[i].salary > Emp[j].salary)
			{
				temp = Emp[i];
				Emp[i] = Emp[j];
				Emp[j] = temp;
			}
		}
	}
	
	cout<<"\n\nSorted Employee's List\n";
	for(i=0; i<6; i++)
	{
		cout<<"\nEmployee "<<i<<" :";
		cout<<"\nName = "<<Emp[i].name<<"\tSalary = "<<Emp[i].salary;
	}
	
	return 0;
}
