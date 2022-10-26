// 					CLASS AND OBJECT
// example:-

#include<iostream>
using namespace std;

class Employee
{
	public:
		int salary;
		char *name;
		
		void show()
		{
			cout<<"\nName : "<<name;
			cout<<"\nSalary : "<<salary;
		}
};

int main()
{
	Employee E1,E2;
	
	E1.name = new char[30];
	//E2.name = new char[30];
	
	cout<<"\nEnter the name : ";
	cin.getline(E1.name,28,'\n');
	
	cout<<"\nEnter the salary : ";
	cin>>E1.salary;
	
	E1.show();
	
	delete[] E1.name;
	return 0;
}
