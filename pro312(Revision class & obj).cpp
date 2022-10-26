// Creating Student Database

#include<iostream>
#include<string.h>
using namespace std;

class Student
{
		char *name;
		int age;
		int roll;
	public:
		Student()
		{
			name = new char[30];
			cout<<"\nEnter Name : ";
			cin.getline(name,28,'\n');
			cout<<"\nEnter Age : ";
			cin>>age;
			cout<<"\nEnter Roll : ";
			cin>>roll;
			cin.ignore(1);
		}
		Student(const char name[30], int age, int roll)
		{
			this->name = new char[30];
			strcpy(this->name, name);
			this->age = age;
			this->roll = roll;
		}
		~Student()
		{
			delete[] name;
		}
		void print()
		{
			cout<<"\nName = "<<name;
			cout<<"\t\tAge  = "<<age;
			cout<<"\tRoll = "<<roll;
		}
		static void search_name(Student *p, const char *name)
		{
			int i;
			for(i=0; i<3; i++)
			{
				if(strcmp((p+i)->name, name) == 0)
				{
					cout<<"\nStudent is found";
					(p+i)->print();
					break;	
				}	
			}
			if(i == 3)
			{
				cout<<"\nStudent Not found!";
			}
		}
		static void search_char(Student *p,char ch)
		{
			cout<<"\nStudents whose name starts with character "<<ch<<" are : ";
			int i,flag=0;
			for(i=0; i<3; i++)
			{
				if((p+i)->name[0] == ch)
				{
					flag = 1;
					(p+i)->print();
				}	
			}
			if(flag==0)
			{
				cout<<"\nNot found!";
			}
		}
		static void search_roll(Student *p, int r)
		{
			int i;
			for(i=0; i<3; i++)
			{
				if((p+i)->roll == r)
				{
					cout<<"\nStudent is found";
					(p+i)->print();
					break;	
				}	
			}
			if(i == 3)
			{
				cout<<"\nStudent Not found!";
			}
		}
};

int main()
{
	Student S[3];
	Student obj("Jivan Raundal", 20, 142);
	
	cout<<"\nMonitor : ";
	obj.print();
	cout<<"\nStudents List :";
	int i;
	for(i=0; i<3; i++)
	{
		S[i].print();
	}
	
	char name[30];
	cout<<"\n\nEnter Name to be searched : ";
	cin.getline(name,28,'\n');
	Student::search_name(S,name);
	
	char ch;
	cout<<"\n\nEnter character : ";
	cin>>ch;
	Student::search_char(S,ch);
	
	int roll;
	cout<<"\n\nEnter Roll no. of student to be searched : ";
	cin>>roll;
	Student::search_roll(S,roll);
	
	return 0;
}
