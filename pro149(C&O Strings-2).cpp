// 				CLASS AND OBJECT
// example:-

#include<iostream>
using namespace std;

class Employee
{
	private:
		int salary;
		char *name;
		
	public:
		void scan()
		{
			name = new char[30];
			cout<<"\nEnter the name : ";
			cin.getline(name,28,'\n');
			
			cout<<"\nEnter the salary : ";
			cin>>salary;
			
			cin.ignore(1);	//to avoid input buffer problem after cin>> & during next getline() 
		}
		void show()
		{
			cout<<"\nName : "<<name;
			cout<<"\nSalary : "<<salary;
		}
		void freememory()
		{
			delete[] name;
		}
};

int main()
{
	Employee E1,E2;
	
	E1.scan();
	E2.scan();
	E1.show();
	E2.show();
	
	E1.freememory();
	E2.freememory();
	
	return 0;
}
