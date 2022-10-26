// Q 10] create a database of 5 Employees. Write a menue driven code for following operations.
//		 1)sort by ID.
//       2)sort by Salary.
//		 3)Scan a character from user & print all the employees whose name starts with given character.

#include<iostream>
using namespace std;

class Employee
{
	private:
		char *name;
		int id;
		float salary;
		
	public:
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
		
		static void sort_ID(Employee *p)
		{
			int i,j;
			Employee temp;
			for(i=0; i<5; i++)
			{
				for(j=i+1; j<5; j++)
				{
					if((p+i)->id > (p+j)->id)
					{
						temp   = *(p+i);
						*(p+i) = *(p+j);
						*(p+j) = temp;
					}
				}
			}
		}
		
		static void sort_salary(Employee *p)
		{
			int i,j;
			Employee temp;
			for(i=0; i<5; i++)
			{
				for(j=i+1; j<5; j++)
				{
					if((p+i)->salary > (p+j)->salary)
					{
						temp   = *(p+i);
						*(p+i) = *(p+j);
						*(p+j) = temp;
					}
				}
			}
		}
		
		static void search_by_char(Employee *p)
		{
			int i;
			char ch;
			cout<<"\nEnter the character : ";
			cin>>ch;
			int flag = 0;	
			for(i=0; i<5; i++)
			{
				if((p+i)->name[0] == ch)
				{
					flag = 1;
					(p+i)->print();
				}
			}
			if(flag==0)
			{
				cout<<"\nNo name starting with "<<ch<<" character.";
			}
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
				Employee::sort_ID(E);	//passing base addr of array of objects to pointer to object
				cout<<"\n\nSorted List of employee's according to Id is :";
				for(i=0; i<5; i++)
				{
					E[i].print();
				}
				break;
					
			case 2:
				Employee::sort_salary(E);
				cout<<"\n\nSorted List of employee's base on Salary is :";
				for(i=0; i<5; i++)
				{
					E[i].print();
				}
				break;
					
			case 3:
				Employee::search_by_char(E);
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
