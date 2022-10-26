// 						String Inbuilt Function
//	strcmp() :- This function compares the two strings alphabetically.
// 1) Return values of strcmp() are 1,-1,0;
// 2) SYNTAX:-  strcmp(str1, str2);
// 3) If Both strings are equal then it returns 0.
// 4) If the strings are Unequal then depending upon the sign of result strcmp() will return 1 or -1.
// 5) If str1 > str2, then it will return 1, else return -1.
// 6) Strings are compared alphabetically on the basis of ASCII value of characters.

#include<iostream>
#include<string.h>	//header file for strcmp()
using namespace std;

int main()
{
	//case-1:-
	char str1[] = "Jivan";
	char str2[] = "Jivan";
	int x;
	x = strcmp(str1, str2);		//x=0; bcz both strings are same
	cout<<"\nx = "<<x;
	
	//case-2:-
	char str3[] = "JIVAN";
	char str4[] = "jivan";
	int y;
	y = strcmp(str3, str4);		//x=-1; bcz ASCII value of capital alphabets is lower than small alphabets.
	cout<<"\ny = "<<y;
	
	//case-3:-
	char str5[] = "jivan";
	char str6[] = "JIVAN";
	int z;
	z = strcmp(str5, str6);		//x=1; bcz ASCII value of small alphabets is higher than capital alphabets.
	cout<<"\nz = "<<z;
	
	return 0;
}

