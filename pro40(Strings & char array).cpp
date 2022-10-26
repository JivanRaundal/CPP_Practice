//									STRINGS
// 1) strings and normal array are same, only difference is - normal array does not have \0 at end, while string
//    has \0 at the end of array, inserted automatically during :-
//				A) At the time of initializing array as string.
//				B) At the time of scanning string from user.
// 2) If you are accessing char array as a string then perform scanning & printing as a string.
// 3) Normal char array is printed using loop, but in case of string we can print whole string by giving address of
//	  string to cout<<.	eg- cout<<&str[0]; OR cout<<str;
// 4) To print address of string you have to do typecasting.	eg- (long long)&str[0].
// 5) cout will start printing string from given address.
// 6) We dont need to mentioned where to stop printing. It will automatically stopped at \0.
// 7) Two methods to access string:-
//				A) Character by character - using loops
//				B) Directly as a string (cout<<str;)


#include<iostream>
using namespace std;

int main()
{
	char arr[30] = {'H','e','l','l','o'};	//char array but in array form
	char str[30] = "Hello";					//char array but in string form, here \0 will be automatically inserted.
	
	// To print normal array
	cout<<"\narr[0] = "<<arr[0];	//o/p = H, it will print only 0th element
	cout<<"\n&arr[0] = "<<&arr[0];	//o/p = Hello  it will print whole char array.
	cout<<"\n(long long)&arr[0] = "<<(long long)&arr[0];	//it will print address of 0th element.
	
	/*
	int num[5] = {1,2,3,4,5};
	cout<<"\n&num[0] = "<<&num[0];	//int, float, double array prints only address when cout<<&num[0];
	*/
	
	//To print normal char array use loop
	cout<<"\nNormal char arr is in array form is : \n";
	int i;
	for(i=0; i<5; i++)
	{
		cout<<" "<<arr[i];
	}
	
	// To print char array in string form
	cout<<"\n\nString = "<<str;	//OR cout<<&str[0] address will print whole string till \0
	
	//To print string using loop.
	cout<<"\nString using loop : \n";
	i=0;
	while(str[i]!='\0')
	{
		cout<<" "<<str[i];
		i++;
	}
	cout<<"\nstr = "<<str;
	cout<<"\nstr+2 = "<<str+2;	//it will start printing string from 2nd index to '\0'
	cout<<"\nstr+3 = "<<str+3;
	
	return 0;
}									
