// Q 1]. Complete the code for following main() function. Class student contains name,roll,address
//       main() function is as mentioned in question.

#include<iostream>
using namespace std;

class Student
{
	public:
		char name[50];
		char addr[50];
		int roll;
		
		void scandata()
		{
			cout<<"\n\nEnter name : ";
			cin.getline(name,48,'\n');
			cout<<"\nEnter roll number : ";
			cin>>roll;
			cout<<"\nEnter Address : ";
			cin.ignore(1);	//to avoid problem due to input buffer
			cin.getline(addr,48,'\n');
		}
};

void printdata(Student S)
{
	cout<<"\n------------------------------";
	cout<<"\nName : "<<S.name;
	cout<<"\nRoll Number : "<<S.roll;
	cout<<"\nAddress : "<<S.addr;
	cout<<"\n------------------------------";
}

int main()
{
	Student S1,S2;
	S1.scandata();
	printdata(S1);
	S2.scandata();
	printdata(S2);
	return 0;
}
