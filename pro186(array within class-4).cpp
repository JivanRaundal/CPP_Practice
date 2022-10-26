//			CLASS & OBJECT
// ARRAY WITHIN CLASS :-
// Q. Previous code using member functions - 

#include<iostream>
using namespace std;

class Student
{
	private:
		int marks[5];
		
	public:
		
		void scan()
		{
			cout<<"\n\nEnter Marks\n";
			int i;
			for(i=0; i<5; i++)
			{
				cout<<"\nSubject "<<i+1<<" : ";
				cin>>marks[i];
			}
		}
		
		void print()
		{
			cout<<"\nDisplaying Marks\n";
			int i;
			for(i=0; i<5; i++)
			{
				cout<<" "<<marks[i];
			}
		}
		
		int total()
		{
			int i, sum = 0;
			for(i=0; i<5; i++)
			{
				sum = sum + marks[i];
			}
			return sum;
		}
};

int main()
{
	Student sachin,virat;
	int sum1,sum2;
	
	sachin.scan();
	sachin.print();
	sum1 = sachin.total();
	cout<<"\nTotal Marks of sachin = "<<sum1;
	
	virat.scan();
	virat.print();
	sum2 = virat.total();
	cout<<"\nTotal Marks of virat = "<<sum2;
	return 0;
}
