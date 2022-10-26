// Function returning value by reference.

//NOTE1]:- Do not return references of Local Variables
//NOTE2]:- In this case ref_y refers to memory of y which is declared local to show() fun. So, after fun() call show()
//			 functions stackframe will get destroyed and y will also gets destroyed and further ref_y will also destroy.
//			 So, we cannot do show() = 90; (compiler will give warning not error)
// WARNING:- [Warning] reference to local variable 'y' returned [-Wreturn-local-addr]


#include<iostream>
using namespace std;

int & show()
{
	int y = 20;
	return y;
}

int main()
{
	int x;
	x = show();
	cout<<"\nx = "<<x;
	
	show() = 90;	//warning
	return 0;
}
