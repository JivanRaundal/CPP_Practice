//				STRING CLASS IN CPP
// Note - CPP has inbuilt class name string. We only use that class, no need to define bcz it's inbuilt.
//        Therefore, we can say that we have seperate standard datatype for string in cpp.
// example :-
// Note - You only need to create object of class string & use it.
// Syntax of getline() for string class objects => getline(cin,obj_name/string name);
// In this code there are just try & error methods. Don't know exact behaviour

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
	
	//to append 2 strings in 3rd string use S3 = S1.append(S2);
	string S3;
	S3 = S1.append(S2);
	cout<<"\nString 3 = "<<S3;
	
	unsigned long int x = S1.max_size();
	cout<<"\nMax size of S1 = "<<x;
	
	int y = S1.compare(S2);		//returns -1 if S1<S2, +1 if S1>S2, length if S1=S2
	cout<<"\nS1.compare(S2) = "<<y;
	
	int z = S1.size();	//returns total length of all strings
	cout<<"\nS1.size() / S2.size() / S3.size() = "<<z;
	
	int w = S1.find('H');	//return 1 if 'H' is present in string S1, returns -1 if not present
	cout<<"\ns1.find('H') = "<<w;
	
	return 0;
}
