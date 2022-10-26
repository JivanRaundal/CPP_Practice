// Q 2] Scan a string and print it's length for following main() function. Do not use any extra var or array.

#include<iostream>
#include<string.h>
using namespace std;

int main()
{
	char *p;
	p = new char[30];
	cout<<"\nEnter string : ";
	cin.getline(p,28,'\n');
	cout<<"\nString = "<<p;

	cout<<"\nLength = "<<strlen(p);	//inbuilt fun strlen() bcz of condn not to declare extra var
	
	delete[] p;
	return 0;
}
