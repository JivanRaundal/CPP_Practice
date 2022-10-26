// Q 7].	command => multiply 10 2
//					   multiply 3 1 44 3
// 	    add command will perform multiplication of all the integers given in command.

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
	
	int ans = 1;
	for(i=1; i<argc; i++)
	{
		ans = ans * atoi(argv[i]);		//atoi() function converts string into int
	}
	cout<<"\nMultiplication = "<<ans<<endl;

	return 0;
}
