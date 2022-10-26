//								STRINGS
// 1) To avoid problem of cin getline() function is used.
// 2) Terminating character for getline() is '\n'
// 3) getline() takes three parameters:-
//	  SYNTAX:-	getline(base_address_of_string, max_no_of_char_to_scan, terminating_char)
//				eg- if we have char str[200] then, cin.getline(str, 198, '\n')
// 4) If we don't mentioned terminating character then by default it is '\n'.
// 5) We can mentioned any terminating char other than '\0', string will scan upto that terminating char
//    but standard way is to use '\n' as terminating char.
// 6) getline() will scan from 0 to 198 index & will insert '\0' at 199th index i.e. at the end automatically.
// 7) NOTE:- getline() is the member of function of class istream, so we have to use cin to call getline()
//			 eg- cin.getline()

#include<iostream>
using namespace std;

int main()
{
	char str[30];
	cout<<"\nEnter string1 : ";
	cin.getline(&str[0], 28);	// OR cin.getline(str, 198, '\n');  By default terminating char is '\n'
	cout<<"\nYou Entered : "<<str;
	
	//If terminating char is other than '\n';	
	char s[50];
	cout<<"\n\nEnter string2 : ";
	cin.getline(s, 48, '?');	//here terminating char is '?'
	cout<<"\nYou Entered : "<<s;
	return 0;
}  
