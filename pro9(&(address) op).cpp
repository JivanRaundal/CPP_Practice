// & --> adress of operator
// * --> value at operator 
// '&x' (x is any var) prints the hexadecimal adress of var x, to convert that hexadecimal number to int 
// we have to tyecast &x into (long long) or (long long int).

#include<iostream>
using namespace std;

int main()
{
	int x;
	x=10;
	cout<<"\nAdress of x is: "<<&x;	//it gives hexadecimal number.
	cout<<"\n\nAdress of x in equivalent int is: "<<(long long)&x;	//typecasting into (long long).
	return 0;
}
