// chapter-3 exercise, page_no - 126, Que_no - 2]
// Q. Temperature Conversion.

#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	double far, cel;
	
	cout<<"\n1. to convert Fahrenheit to Celcius.";
	cout<<"\n2. to convert Celcius to Farhenheit.";
	int ch;
	cout<<"\nEnter your choice : ";
	cin>>ch;
	
	if(ch==1)
	{
		cout<<"\nEnter the temperature in Farhenheit : ";
		cin>>far;
		cel = 5.0/9.0 * (far-32.0); 
		cout<<"\nIn Celcius that's : "<<cel;
	}
	else
	{
		cout<<"\nEnter the temperature in Celcius : ";
		cin>>cel;
		far = 9.0/5.0 * cel+32.0; 
		cout<<"\nIn farhenheit that's : "<<far;	
	}
	return 0;
}
