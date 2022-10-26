//     			REVISION
// WWBTO..? (what will be the output)

#include<iostream>
using namespace std;

int main()
{
	char str[100] = "Why the hell he developed CPP?";
	char *p = str;
	
	cout<<"\n"<<p;
	cout<<"\n"<<p+3;
	cout<<"\n"<<*(p+3);
	cout<<"\n"<<p+6;
	p = p + 5;
	cout<<"\n"<<*p;
	cout<<"\n"<<p;
	cout<<"\n"<<p-2;
	return 0;
}
