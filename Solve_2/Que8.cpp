// Q 8]. Scan details of T1 & T2 in main(). print them in main().
//		 Do not define any member function.

#include<iostream>
using namespace std;

class Stud
{
	public:
		char *name;
		int age;
};

int main()
{
	Stud T1,T2;
	
	//allocating runtime memory for name
	T1.name = new char[30];
	T2.name = new char[30];
	
	cout<<"\nEnter details for 1st student : ";
	cout<<"\nEnter Name : ";
	cin.getline(T1.name,28,'\n');
	cout<<"\nEnter Age : ";
	cin>>T1.age;
	cin.ignore(1);
	
	cout<<"\nEnter details for 2nd student : ";
	cout<<"\nEnter Name : ";
	cin.getline(T2.name,28,'\n');
	cout<<"\nEnter Age : ";
	cin>>T2.age;	
	
	cout<<"\n\nPrinting details of studets\n";
	cout<<"\n1) Name = "<<T1.name<<"\tAge = "<<T1.age;
	cout<<"\n2) Name = "<<T2.name<<"\tAge = "<<T2.age;
	
	delete[] T1.name;
	delete[] T2.name;
	return 0;
}
