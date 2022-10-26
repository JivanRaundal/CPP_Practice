//							STRINGS
// 1) To avoid problem of input buffer in getline() use getline() 2 times. OR
// 2) Use ignore() function
// 3) It is a member function of class istream.
// 4) Hence, we have to call it using cin.	eg- cin.ignore()
// 5) STNTAX:-  cin.ignore(1) //it will ignore 1 char from input buffer whatever it is)
// 6) If parameter is 2,3,... then it will ignore corresponding characters
// 7) eg- if we use cin.ignore(3) and entered string by user is "Jivan" then, it will ignore '\n' and 2 char from string
//    i.e. total 3 characters will be ignored and output wil be "van" instead of "Jivan".


#include<iostream>
using namespace std;

int main()
{
	int x;
	char str[30];
	
	cout<<"\nEnter integer1 : ";
	cin>>x;
	
	cout<<"\n\nEnter string1 : ";
	cin.ignore(1); // to avoid '\n' in input bffer
	cin.getline(str, 28);	// to scan string
	cout<<"\nString1 : "<<str;
	
	// if parameters are other than 1
	int y;
	char s[30];
	
	cout<<"\n\nEnter integer2 : ";
	cin>>y;
	cout<<"\nEnter string2 : ";
	cin.ignore(3);
	cin.getline(s, 28);
	cout<<"\nString2 : "<<s;
	return 0;	
} 
