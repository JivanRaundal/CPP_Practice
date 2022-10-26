// Q. find & replace word in string using find() & replace() functions of class string

// 1] str.find("string_to_find");	=> returns the index of first character of string to be find (i.e. sub_string)
// 2] str.replace(ind_of_str_to_replace, length_of_str_to_replace, "str_to_replace");
// 3] string::npos => npos is static datamember of inbuilt class string. It gives highest possible index of string.
//					  It actually means until the end of string.

#include<iostream>
#include<string.h>
#include<string>
using namespace std;

int main()
{
	string str1 = "I love work, work is my hobby.";
	string str2 = "code";
	cout<<"\nString before replacing = "<<str1;
	
	int ind;
	while((ind = str1.find("work")) != string::npos)
	{
		str1.replace(ind, str2.length(), str2);
	}
	cout<<"\nString after replacing = "<<str1;
	
	return 0;
}
