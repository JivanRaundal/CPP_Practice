////					CLASS & OBJECT
// Q. complete the following code.

#include<iostream>
using namespace std;

class Student
{
	private:
		char *name;
		int  *age;
	
	public:
		void scan()
		{
			name = new char[20];
			cout<<"\n\nEnter Name : ";
			cin.getline(name,18,'\n');
			
			age = new int();	//OR age = new int[1];
			cout<<"\nEnter Age : ";
			cin>>*age;
			cin.ignore(1);
		}
		
		void print()
		{
			cout<<"\nName = "<<name<<"\tAge = "<<*age;
		}
		
		void freememory()
		{
			delete[] name;
			delete[] age;
		}
};

int main()
{
	Student S1,S2;
	
	S1.scan();
	S2.scan();
	S1.print();
	S2.print();
	S1.freememory();
	S2.freememory();
	return 0;
}
