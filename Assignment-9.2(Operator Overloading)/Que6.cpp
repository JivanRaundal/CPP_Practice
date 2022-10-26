// Q 6]. Complete the class definition for given main() funtion.
//       Search given name in your database.
//		 Sort array of objects by age. use operator overloading to sort.


#include<iostream>
#include<string.h>
using namespace std;

class Student
{
		char * name;
		int age;
		int roll;
	public:
		Student()	//constructor
		{
			name = new char[30];
			cout<<"\n\nEnter Name : ";
			cin.getline(name,28,'\n');
			cout<<"\nEnter Age : ";
			cin>>age;
			cout<<"\nEnter Roll No. : ";
			cin>>roll;
			cin.ignore(1);
		}
		Student(int a)	//parameterized constructor to avoid scanning of unwanted objects
		{
	
		}
		~Student()	//destructor
		{
			delete[] name;
		}
		void print()
		{
			cout<<"\n\nName = "<<name;
			cout<<"\nAge  = "<<age;
			cout<<"\nRoll = "<<roll;
		}
		char* search()
		{
			return name;
		}
		int operator>(Student T)
		{
			if(age > T.age)
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
};

int main()
{
	Student S[5];	//array of objects
	char name[30];
	
	cout<<"\nEnter name to be search : ";
	cin.getline(name,28,'\n');
	//searching given name in database & printing it's details
	int i;
	for(i=0; i<5; i++)
	{
		if(strcmp(name,S[i].search()) == 0) 	//here S[i].search() fun will return base address of its name string for strcmp()
		{
			cout<<"\nStudent is Found";
			S[i].print();
			break;
		}
	}
	if(i==5)
	{
		cout<<"\nStudent is Not Found";
	}
	
	//sort array of objects by age
	int j;
	Student temp(0);	//here, we have intensionally passed parameter to temp to avoid scannig of details for temp
	for(i=0; i<5; i++)
	{
		for(j=i+1; j<5; j++)
		{
			if(S[i] > S[j])
			{
				temp = S[i];
				S[i] = S[j];
				S[j] = temp;
			}
		}
	}
	cout<<"\n\nList of strudent after sorting according to age : ";
	for(i=0; i<5; i++)
	{
		S[i].print();
	}
	
	return 0;
}
