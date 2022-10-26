// setw(n) :- feild width manipulator (used for formatting output)	Right allign the output.
//     n = is a parameter which is integer argument corresponding to which the feild width is to be set.
// Header File :- #include<iomanip>

#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	int m,n,p,q;
	m = 90;
	n = 85642;
	p = 6;
	q = 999999;
	
	cout<<"\nm = "<<setw(10)<<m;
	cout<<"\nn = "<<setw(10)<<n;
	cout<<"\np = "<<setw(10)<<p;
	
	cout<<"\n\nq = "<<setw(4)<<q;	//in this case q has 6 digit number & setw() has 4 as argument, so in this
									// case setw() is ignored and q is printed as normal cout<<q; only.
	return 0;
}
