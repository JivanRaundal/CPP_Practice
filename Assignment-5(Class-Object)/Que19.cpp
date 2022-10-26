// Q 19]. For following main() function, scan 2 strings from user and print their length.
//        condition - Do not declare any extra variable.
// As given in question that do not use any extra variable, here I'm using inbuilt function strlen() to avoid i(var).

#include<iostream>
#include<string.h>
using namespace std;

int main()
{
	char *p;
	p = new char[100];
	
	cout<<"\nEnter 1st string : ";
	cin.getline(p,98,'\n');
	cout<<"\nLength of 1st string = "<<strlen(p);
	
	cout<<"\n\nEnter 2nd string : ";
	cin.getline(p,98,'\n');
	cout<<"\nLength of 2nd string = "<<strlen(p);
	
	delete[] p;
	return 0;
}
