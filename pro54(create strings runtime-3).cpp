// 1) To again reduce the size of previous 2 codes use function create(), so that after creation of string
// 	  we will get final string and all the variables inside the function create() will be destroyed with the
//    stack frame of function, this will save much space.
// 2) NOTE:- If we have created a string at runtime of exact size then we have to pass its address back to main()
//    function so that we can access it. But, if you do not pass its address to main() then there will be memory leak.
// 3) MEMORY LEAK:- Memory leak means, memory occupied but not accessible.

#include<iostream>
#include<string.h>
using namespace std;

char* create()
{
	char *s;
	s = new char[100];
	cout<<"\nEnter string : ";
	cin.getline(s,98,'\n');
	
	int length;
	length = strlen(s);
	
	char *t;
	t = new char[length+1];
	
	strcpy(t, s);
	delete[] s;
	
	return t;
}

int main()
{
	char *ptr;
	ptr = create();
	cout<<"\n\nYou entered = "<<ptr;
	
	delete[] ptr;
	return 0;	
} 
