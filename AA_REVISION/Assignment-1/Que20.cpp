// Q.20]

#include<iostream>
using namespace std;

int g = 10;

int main()
{
	int g = 20;
	
	cout<<"\nLocal g = "<<g;
	cout<<"\nGlobal g = "<<::g;			//using scope resolution operator
	
	return 0;
}
