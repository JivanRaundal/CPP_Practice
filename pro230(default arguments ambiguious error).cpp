// REVISION :- default arguments + function overloading
// Another Ambuiguity error - 
// Note(solution) - 1) If error is due to datatype - use explicit typecasting.
//        			2) If error is due to number of parameters - i) remove default argument OR ii) remove one function.

#include<iostream>
using namespace std;

void print(int x) 	//---(1)
{
	cout<<"\nIn one integer function, x = "<<x;	
}

void print(int x,int y = 5)	// y has default value 	---(2)
{
	cout<<"\nIn two integer function, x = "<<x<<"\ty = "<<y;	
}

int main()
{
	print(10,20);	//10 20
	//print(12);	//compiler will give ambuiguity error for this function call bcz it has two matches for this call.
	/* Solution - 1) either remove function-1 OR 2) remove default arguments in funtion-2. */
	return 0;
}
