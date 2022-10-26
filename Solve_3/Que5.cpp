// Q 5].

#include<iostream>
using namespace std;

class Emp
{
		char *name;
		int age;
	public:
		void scan()
		{
			name = new char[20];
			cout<<"\nEnter Name : ";
			cin.getline(name,18,'\n');
			cout<<"\nEnter Age : ";
			cin>>age;
			cin.ignore(1);
		}
		void show()
		{
			cout<<"\nName = "<<name<<"\tAge = "<<age;
		}
		void freememory()
		{
			delete[] name;
		}
};

int main()
{
	Emp E[4];	//array of objects
	int i;
	cout<<"\nEnter details of employees\n";
	for(i=0; i<4; i++)
	{
		cout<<"\nEmployee "<<i+1<<" : ";
		E[i].scan();
	}
	
	cout<<"\n\nPrinting details of employees\n";
	for(i=0; i<4; i++)
	{
		cout<<"\nEmployee "<<i+1<<" : ";
		E[i].show();
	}
	
	//deleting runtime memory
	for(i=0; i<4; i++)
	{
		E[i].freememory();
	}
	return 0;
}
