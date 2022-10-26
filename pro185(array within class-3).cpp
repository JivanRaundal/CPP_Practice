//			CLASS & OBJECT
// ARRAY WITHIN CLASS :-
// Q. scan sachin & virat's marks & print their total marks of 5 subjects in main() function only.

#include<iostream>
using namespace std;

class Student
{
	public:
		int marks[5];
};

int main()
{
	Student sachin, virat;
	int i, sum1 = 0, sum2 = 0;
	 
	cout<<"\nEnter sachin mark's\n";
	for(i=0; i<5; i++)
	{
		cout<<"\nSubject "<<i+1<<" : ";
		cin>>sachin.marks[i];
	}
	
	cout<<"\nEnter virat mark's\n";
	for(i=0; i<5; i++)
	{
		cout<<"\nSubject "<<i+1<<" : ";
		cin>>virat.marks[i];
	}
	
	//calculating total marks - 
	for(i=0; i<5; i++)
	{
		sum1 = sum1 + sachin.marks[i];	//sachin's marks
		sum2 = sum2 + virat.marks[i];	//virat's marks
	}
	cout<<"\nSachin's Total Marks = "<<sum1;
	cout<<"\nVirat's Total Marks = "<<sum2;
	return 0;
}

