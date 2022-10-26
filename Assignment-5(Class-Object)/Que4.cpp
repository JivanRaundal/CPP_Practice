// Q 4]. Complete the code for following main() fun which stores 4 strings without wasting a single byte of memory.

#include<iostream>
#include<string.h>
using namespace std;

char* getstring()
{
	char str[100];
	cout<<"\nEnter the string : ";
	cin.getline(str,98,'\n');
	
	int length;
	length = strlen(str);
	char *p;
	p = new char[length+1];
	strcpy(p,str);
	return p;
}

int main()
{
	char *ptr[4];
	int i;
	for(i=0; i<4; i++)
	{
		ptr[i] = getstring();
	}
	for(i=0; i<4; i++)
	{
		cout<<ptr[i]<<endl;
	}
	
	//deteting runtime memory (optional)
	for(i=0; i<4; i++)
	{
		delete ptr[i];
	}
}
