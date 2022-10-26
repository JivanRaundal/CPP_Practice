// Q 10]. Scan details of T1 & T2 and print them.

#include<iostream>
using namespace std;

class Stud
{
	private:
		char name[30];
		int *age;
		
	public:
		void scan()
		{
			cout<<"\nEnter Name : ";
			cin.getline(name,28,'\n');
			
			//allocating runtime memory to age
			age = new int();
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
			delete age;
		}
};

int main()
{
	Stud T1,T2;
	
	cout<<"\nEnter details of 1st student : ";
	T1.scan();
	cout<<"\nEnter details of 2nd student : ";
	T2.scan();
	
	cout<<"\nPrinting Details : ";
	T1.print();
	T2.print();
	
	T1.freememory();
	T2.freememory();
	return 0;
}
