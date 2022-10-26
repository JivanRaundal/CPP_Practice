// 					REVISION QUE
// Q. scan a string from user and print it without declaring extra variable.

#include<iostream>
using namespace std;

int main()
{
	char *name;
	name = new char[30];
	cout<<"\nEnter the name : ";
	cin.getline(name,28,'\n');
	cout<<"\nName : "<<name;
	
	delete[] name;
	return 0;
}
