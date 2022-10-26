// Q 7]. scan details of T1 & T2 in main(). print them in main().

#include<iostream>
using namespace std;

class Stud
{
	public:
		char name[30];
		int age;
};

int main()
{
	Stud T1,T2;
	
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
	
	return 0;
}
