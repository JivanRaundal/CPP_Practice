// Q 7] WAP to explain manipulators.
// 1) endl - It inserts a new line & flushes the stream.
// 2) setw() - Feild width manipulator (use for formatting output)

#include<iostream>
#include<iomanip>	//for setw()
using namespace std;

int main()
{
	int m,n,p;
	m = 10;
	n = 99999;
	p = 4;
	
	cout<<"m = "<<setw(10)<<m<<endl;
	cout<<"n = "<<setw(10)<<n<<endl;
	cout<<"p = "<<setw(10)<<p<<endl;
	return 0;
}
