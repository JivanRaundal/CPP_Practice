// Q 7].	command => add 10 25
//					   add 3 54 12
// 	    add command will perform addition of all the integers given in command.

// Note :- here, we are using atoi() function to convert string from command line argument into integer (int) 

#include<iostream>
#include<string>
#include<cstdlib>	//header file for atoi() function
using namespace std;

int main(int argc,char *argv[])
{
	cout<<"\nargc = "<<argc<<endl;
	int i;
	for(i=0; i<argc; i++)
	{
		cout<<"\nargv["<<i<<"] = "<<argv[i];
	}
	
	int sum = 0;
	for(i=1; i<argc; i++)
	{
		sum = sum + atoi(argv[i]);		//atoi() function converts string into int
	}
	cout<<"\nAddition = "<<sum<<endl;

	return 0;
}
