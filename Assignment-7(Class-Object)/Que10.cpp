// Q 10] create a database of 5 Employees. Write a menue driven code for following operations.
//		 1)sort by ID.
//       2)sort by Salary.
//		 3)Scan a character from user & print all the employees whose name starts with given character.

#include<iostream>
using namespace std;

class Employee
{
	public:
		char *name;
		int id;
		float salary;
		
		void scan()
		{
			name = new char[30];
			cout<<"\n\nEnter Name : ";
			cin.getline(name,28,'\n');
			cout<<"\nEnter ID : ";
			cin>>id;
			cout<<"\nEnter Salary : ";
			cin>>salary;
			cin.ignore(1);
		}
		
		void print()
		{
			cout<<"\n\nName : "<<name;
			cout<<"\nID     : "<<id;
			cout<<"\nSalary : "<<salary;
		}
		
		void freememory()
		{
			delete[] name;
		}
};

int main()
{
	Employee E[5];	//array of object
	
	//scanning
	int i,j;
	for(i=0; i<5; i++)
	{
		cout<<"\nEnter details of employee "<<i+1<<" : ";
		E[i].scan();
	}
	
	cout<<"\n\nDetails Of Employees\n";
	for(i=0; i<5; i++)
	{
		E[i].print();
	}
	
	int ch;
	Employee temp;
	
	do
	{
		cout<<"\n\n________________________MENUE________________________";
		cout<<"\n1. sort by ID.";
		cout<<"\n2. sort by salary.";
		cout<<"\n3. scan a character from user & print all employees";
		cout<<"\n   whose name starts with given character.";
		cout<<"\n4. exit.";
		cout<<"\n_____________________________________________________";
		cout<<"\nEnter Your Choice : ";
		cin>>ch;
		
		switch(ch)
		{
			case 1:
				for(i=0; i<5; i++)
				{
					for(j=i+1; j<5; j++)
					{
						if(E[i].id > E[j].id)
						{
							temp = E[i];
							E[i] = E[j];
							E[j] = temp;
						}
					}
				}
				cout<<"\n\nSorted List of employee's according to Id is :";
				for(i=0; i<5; i++)
				{
					E[i].print();
				}
				break;
					
			case 2:
				for(i=0; i<5; i++)
				{
					for(j=i+1; j<5; j++)
					{
						if(E[i].salary > E[j].salary)
						{
							temp = E[i];
							E[i] = E[j];
							E[j] = temp;
						}
					}
				}
				cout<<"\n\nSorted List of employee's base on Salary is :";
				for(i=0; i<5; i++)
				{
					E[i].print();
				}
				break;
					
			case 3:
				char c;
				int flag;	//int flag = 0; gives error so initialized flag in next line.
				flag = 0;
				cout<<"\nEnter the character : ";
				cin>>c;
				for(i=0; i<5; i++)
				{
					if(E[i].name[0] == c)
					{
						flag = 1;
						E[i].print();
					}
				}
				if(flag==0)
				{
					cout<<"\nNo name starting with "<<c<<" character.";
				}
				break;
				
			case 4:
				exit(0);
				
			default:
				cout<<"\nInvalid Choice!..Please try again...";
		}
	}while(ch != 4);
	
	//deleting runtime memory
	for(i=0; i<5; i++)
	{
		E[i].freememory();
	}
	return 0;
}
