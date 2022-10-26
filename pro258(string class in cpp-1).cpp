//				STRING CLASS IN CPP
// Note - CPP has inbuilt class name string. We only use that class, no need to define bcz it's inbuilt.
//        Therefore, we can say that we have seperate standard datatype for string in cpp.
// example :-
// Note - You only need to create object of class string & use it.
// Syntax of getline() for string class objects => getline(cin,obj_name/string name);

#include<iostream>
using namespace std;

int main()
{
	string S1, S2;	//S1 & S2 are object of inbuilt class string
	
	cout<<"\nEnter 1st string : ";
	getline(cin,S1);	//we have separate getline() function for string class objects
	cout<<"\nString 1 = "<<S1;
	int len;
	len = S1.length();	//instread of using strlen(S1), here we have to use S1.length();(bcz S1 is object & length() is member fun)
	cout<<"\nLength of 1st string = "<<len;
	
	cout<<"\nEnter 2nd string : ";
	getline(cin,S2);
	cout<<"\nString 2 = "<<S2;
	len = S2.length();
	cout<<"\nLength of 2nd string = "<<len;
	
	//instead of using strcmp(S1,S2);	we can directly compare 2 string using operators (>,<,>=,<=,==,!=)
	//Bcz of Operator Overloading inside the class string.
	if(S1 > S2)
	{
		cout<<"\n"<<S1<<" is greater than "<<S2;
	}
	else if(S1 < S2)
	{
		cout<<"\n"<<S1<<" is less than "<<S2;
	}
	else	//(S1 == S2)
	{
		cout<<"\n"<<S1<<" is equal to "<<S2;
	}
	
	// to append 2 strings use S1.append(S2)
	string S3;
	S3 = S1.append(S2);
	cout<<"\nString 3(S1+S2) = "<<S3;
	
	return 0;
}
