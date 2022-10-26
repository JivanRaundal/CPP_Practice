// 							INBUILT STRING FUNCTIONS
// 1) Use header file #include<string.h> to use string functions.
// 2) A] strlen() :- It returns the length of string.
//					 It gives number of characters in string excluding '\0'.
//					 It will return int value which we have to store in int_variable.
//					 SYNTAX :- strlen(base_addr_of_str);
// 3) B] strcpy() :- It copies one string to another string.
//					 It will not return anything.
//					 eg- if source string is to be copied in target string then,
//					 SYNTAX :- strcpy(targer_str_base_addr, source_str_base_addr);

#include<iostream>
#include<string.h>	//header file for strings inbuilt functions.
using namespace std;

int main()
{
	char source[30];
	char target[30];
	
	cout<<"\nEnter source string : ";
	cin.getline(source, 28, '\n');
	cout<<"\nSource string is : "<<source;
	
	int length;
	length = strlen(&source[0]);	//inbuilt fun which returns length of string.
	cout<<"\n\nLength of source string = "<<length;
	
	strcpy(&target[0], &source[0]);	//inbuilt function which copies source str into target str.
	cout<<"\n\nTarget string = "<<target;
	return 0;	
} 
