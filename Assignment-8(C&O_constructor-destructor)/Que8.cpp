// Q 8]. scan details of 2 objects using constructor and print those details of each object using destructor.

#include<iostream>
using namespace std;

class Stud
{
		char *name;
		int  *age;
		
	public:
		Stud()	//constructor
		{
			name = new char[30];
			age  = new int();
			
			cout<<"\nEnter Name : ";
			cin.getline(name,28,'\n');
			cout<<"\nEnter Age : ";
			cin>>*age;
			cin.ignore(1);
		}
		~Stud()	//destructor
		{
			cout<<"\nName = "<<name<<"\tAge = "<<*age;
			delete[] name;
			delete age;
		}
};

int main()
{
	Stud S1,S2;
	return 0;
}
