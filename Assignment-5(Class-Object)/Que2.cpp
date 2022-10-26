// Q 2]. Complete the code for following main() function. Class Employee contains name, salary, address
//       HINT:- Think which are member functions and which are not.
//       (main() fun is as given in que)

#include<iostream>
using namespace std;

class Employee
{
	public:
		char name[50];
		char addr[50];
		int salary;
		
		void scandata()
		{
			cout<<"\n\nEnter name : ";
			cin.getline(name,48,'\n');
			cout<<"\nEnter salary : ";
			cin>>salary;
			cout<<"\nEnter Address : ";
			cin.ignore(1);
			cin.getline(addr,48,'\n');
		}
		
		void printdata()
		{
			cout<<"\nName : "<<name;
			cout<<"\nsalary : "<<salary<<" INR";
			cout<<"\nAddress : "<<addr;
		}
};

void scandata(Employee & T)	//by value
{
	cout<<"\n\nEnter name : ";
	cin.getline(T.name,48,'\n');
	cout<<"\nEnter salary : ";
	cin>>T.salary;
	cout<<"\nEnter Address : ";
	cin.ignore(1);
	cin.getline(T.addr,48,'\n');
}

void print(Employee E)
{
	cout<<"\nName : "<<E.name;
	cout<<"\nsalary : "<<E.salary<<" INR";
	cout<<"\nAddress : "<<E.addr;
}

int main()
{
	Employee E1,E2;
	E1.scandata();
	print(E1);
	scandata(E2);
	E2.printdata();
	return 0;	
}
