// Q 16]. For following main() function, scan a string from user and print it.
//        Condition Do not declare any extra variable.
//        int main()
//        {  char *p;
//        }

#include<iostream>
using namespace std;

int main()
{
	char *p;
	p = new char[100];

	cout<<"\nEnter the string : ";
	cin.getline(p,98,'\n');
	
	cout<<"\nString = "<<p;
	
	delete[] p;
	return 0;
}
