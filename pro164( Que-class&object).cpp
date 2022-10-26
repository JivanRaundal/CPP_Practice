//// Revision - Class & object
// Q. Complete the following code for given class.
//   Scan details of two students & print them using member function.

#include<iostream>
using namespace std;

class Student
{
	char *name;
	int age;
	public:
		void scan()
		{
			name = new char[30];
			cout<<"\nEnter the name : ";
			cin.getline(name,28,'\n');
	
			cout<<"\nEnter the age : ";
			cin>>age;
			cin.ignore(1);
		}
		void show()
		{
			cout<<"\n\nName : "<<name;
			cout<<"\nAge : "<<age;
		}
		void freememory()
		{
			delete[] name;
		}
};

int main()
{
	Student S1,S2;
	S1.scan();
	S2.scan();
	S1.show();
	S2.show();
	S1.freememory();
	S2.freememory();
	return 0;
}
