// To reduce the size of memory, declare 1 string of greater size at runtime, then copy it's contents to the another
// string 2 whose size is exactly equal to the size of string entered by user(1st string).
// create both strings at runtime and then, after coping contents of 1st string to second string then delete 
// 1st string so that we will have only required string of required size, this will reduced memory size.

#include<iostream>
#include<string.h>
using namespace std;

int main()
{
	char *s;	//source string pointer
	s = new char[100];
	cout<<"\nEnter the string : ";
	cin.getline(s,98,'\n');
	
	int length;
	length = strlen(s);
	char *t;
	t = new char[length+1];	//this will create 2nd string of size equal to the string entered by user.
	
	strcpy(t, s);	//copies 1st string to 2nd
	delete[] s;	//delete 1st string after use
	
	cout<<"\n\nYou Entered = "<<t;
	
	delete[] t;
	return 0;
}
