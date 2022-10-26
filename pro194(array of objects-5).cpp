//					CLASS & OBJECT
// ARRAY OF OBJECT:-
//example:-
// Q. scan 5 subject marks for 4 students & calculate average marks of each student using ClassObject & Array of Object.

#include<iostream>
using namespace std;

class Student
{
	private:
		int subject[5];	//array of int
		
	public:
		void scan()	//scanning 5 subject's marks for 1 student at a time
		{
			int i;
			for(i=0; i<5; i++)
			{
				cout<<"\nEnter "<<i<<"th subject marks : ";
				cin>>subject[i];
			}
		}
		
		void print()	//printing 5 subject's marks for 1 student at a time
		{
			int i;
			for(i=0; i<5; i++)
			{
				cout<<" "<<subject[i];
			}
		}
		
		float average()	//calculating average marks of 5 subject's for 1 student at a time
		{
			float avg;
			int i, sum=0;
			for(i=0; i<5; i++)
			{
				sum = sum + subject[i];
			}
			avg = sum/5.0;
			return avg;
		}
};

int main()
{
	Student std[4];	//array of object
	
	int i;
	float avg;
	/*
	//scanning marks of each student
	for(i=0; i<4; i++)
	{
		cout<<"\n\nEnter Marks for "<<i<<"th student :\n";
		std[i].scan();
	}
	//printing marks of each student
	for(i=0; i<4; i++)
	{
		cout<<"\n\nMarks of "<<i<<"th student :\n";
		std[i].print();
	}
	//printing average marks of each student
	for(i=0; i<4; i++)
	{
		avg = std[i].average();
		cout<<"\n\nAverage marks of "<<i<<"th student = "<<avg;
	}
	*/
	
	// "OR Do all in One Loop"
	
	for(i=0; i<4; i++)
	{
		cout<<"\n\n[Enter Marks for "<<i<<"th student]\n";
		std[i].scan();
		
		cout<<"\n\n[Marks of "<<i<<"th student]\n";
		std[i].print();
		
		avg = std[i].average();
		cout<<"\n\nAverage marks of "<<i<<"th student = "<<avg;
	}
	
	return 0;
}
