/*										STRINGS
   1) To scan string using cin, we have to give base address of string to cin.	eg- cin>>&str[0]
   2) Not only base address, but any address from where you want to store the string.	eg- cin>>&str[2]
	  It will store from given index. in this example string will store in array from 2nd index.
   3) '\0' will be inserted at the end of string automatically.
   4) In general, cin will scan a string, store it from address mentioned, and stores '\0' at the end of 
	  string automatically.
   5) Only in case of strings cin ko address pass karna padta hai, otherwise no address is passed to cin.
   6) problem with cin :-
		I) cin will scan only single word.	eg- if string = Hello World, then cin will scan only Hello (single word)
		II) Three terminating characters for cin :-
											A) space (" ")
											B) \n (new line (press enter) )
											C) \t (Tab)
		III) While scanning input if cin faces any of these 3 terminating characters, it immediately stops scanning
			 for current element and starts scanning input for another(next) element in array if any.
		IV) That is why while scanning string using cin you can scan only one word at a time.
*/

#include<iostream>
using namespace std;

int main()
{
	char str[30];
	cout<<"\nEnter string1 : ";
	cin>>&str[0];	// scanning string and stores from 0th index
	cout<<"\nYour String : "<<&str[0];	//only prints single word i.e. first
	
	char s[30];
	cout<<"\n\nEnter string2 : ";
	cin>>&s[0];
	cout<<"\nYour string : "<<s;	//It will print 2nd word of first string
	/*NOTE:- Therefore first cin will print first word of 1st string and 2nd cin will print 2nd word of first string
	although it is scanning 2nd string. This is because after giving space in 1st string input, 1st cin will terminate
	and 2nd word entered after space(" ") will remain as it is in input buffer so it will be printed by 2nd cin.*/
	return 0;
}
