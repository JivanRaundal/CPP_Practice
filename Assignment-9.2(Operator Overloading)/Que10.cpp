// Q 10]. Complete the class difinition for given main() function.

#include<iostream>
#include<string.h>
using namespace std;

class Student
{
		char * name;
	public:
		Student()	//default constructor
		{
			name = new char[30];
			cout<<"\nEnter Name : ";
			cin.getline(name,28,'\n');
		}
		~Student()
		{
			delete[] name;
		}
		void show()
		{
			cout<<"\nName = "<<name;
		}
		int operator>(Student T)
		{
			if(strcmp(name, T.name)==1)		//i.e. if(str1 > str2)
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
	Student S[5],temp;
	int i,j;
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
	//printing
	cout<<"\nList of students after sorting based on name : ";
	for(i=0; i<5; i++)
	{
		S[i].show();
	}
	return 0;
}
