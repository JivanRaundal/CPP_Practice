//			CONSTRUCTOR & DESTRUCTOR
// Q. scan details for S1 & S2 using constructor & print using destructor.

#include<iostream>
using namespace std;

class Stud
{
		char name[30];
		int age;
		
	public:
		Stud()	//constructor
		{
			cout<<"\nEnter Name : ";
			cin.getline(name,28,'\n');
			cout<<"\nEnter Age : ";
			cin>>age;
			cin.ignore(1);
		}
		~Stud()	//destructor
		{
			cout<<"\nName = "<<name<<"\tAge = "<<age;
		}
};

int main()
{
	Stud S1,S2;
	return 0;
}
