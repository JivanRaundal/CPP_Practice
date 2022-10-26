//										STRINGS
// 								PROBLEM WITH getline()
// 1) PROBLEM:- If you use cin before getline() then there is problem with getline(), control will directly move to next
//	  instruction after getline()
// 2) CAUSE:- This is because after giving value to cin, when you press enter key i.e. '\n', value given to cin
//    will be scan but '\n' will remain as it is in input buffer.
// 3) therefore getline() will scan '\n' already from input buffer so it will terminate as '\n' is its terminating condn.
// 4)  If you use getline() before getline() then there is no problem.

#include<iostream>
using namespace std;

int main()
{
	int x;
	char str[30];
	
	cout<<"\nEnter integer : ";
	cin>>x;
	cout<<"\nx = "<<x;
	
	cout<<"\n\nEnter string : ";
	//cin.getline(str, 28);
	cin.getline(str, 28);
	cout<<"\nYou Entered : "<<str;
	return 0;
}
