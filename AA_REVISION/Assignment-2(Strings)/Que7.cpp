// Q.7]

#include<iostream>
using namespace std;

int main()
{
	char * s = new char[30];
	char * t = new char[30];
	cout<<"\nEnter Source String : ";
	cin.getline(s,28,'\n');
	
	int i=0;
	while(*(s+i) != '\0')
	{
		*(t+i) = *(s+i);
		i++;
	}
	*(t+i) = '\0';
	cout<<"\nTarget String = "<<t;
	
	delete[] s;
	delete[] t;
	return 0;  
}
