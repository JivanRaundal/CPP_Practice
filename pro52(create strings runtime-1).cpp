// 1) PROBLEM with:- 	char string[100] is wastage of memory, if entered string is of 6 bytes then remaining 94 bytes
//                  are waste.
// 2) To eleminate this problem we use runtime memory allocation using new operator.
// 3) NOTE :- We cannot use delete operator to delete memory on stack.
// 4) DELETE :- delete is use to free memory allocated on heap. 
// 5) If we does not use delete then after the execution of code memory on heap will be freed/deleted automatically
//    by c++, java garbage collector.
// 6) But if our main() code is using much more memory on heap and we are not deleting it after use then their might
//    be chances that heap will be full and will no longer available for use.	eg- ATM Machine.

#include<iostream>
#include<string.h>
using namespace std;

int main()
{
	char str[100];
	cout<<"\nEnter string : ";
	cin.getline(str, 98, '\n');
	
	int length;
	length = strlen(str);	//gives length of str excluding '\0'
	
	char *p;
	p = new char[length+1];	//creates runtime char array on heap, its size is exactly equal to the size of str.
							// In length+1, (+1) is to add '\0' at the end of string.
							
	strcpy(p, str);	//copies str to p(runtime created string))
	
	//delete str;	//we can't to this bcz = read (rule 3) hence it will give warning or error.
	
	cout<<"\n\nYou Entered = "<<p;
	
	delete[] p;	//for safety delete memory on heap explicitly.
	return 0;
	
}
