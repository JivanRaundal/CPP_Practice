// Q 8]. Scan a string from user and copy it in another string in reverse order. (extra pointer method)
//		 Without using inbuilt function.

#include<iostream>
using namespace std;

int main()
{
	char source[100];
	char target[100];
	char *p, *q;
	p = source;
	q = target;
	
	cout<<"\nEnter source string : ";
	cin.getline(p,98,'\n');
	cout<<"\nSource = "<<p;
	
	int j=0;
	while(*(p+j)!='\0')
	{
		j++;		// j gives length of string.
	}
	
	int k = j-1;	//k=(length-1) = last index of source string.
	int i=0;
	while(k>=0)	//k will start from last index of source to 0th index of source.
	{
		*(q+i) = *(p+k);	//source(k for source) will traversed reverse & target will traversed forward  
							// and corresponding elements will be inserted in target(i for target).
		i++;
		k--;
	}
	*(q+i) = '\0';	//to insert '\0' at end of target.
	cout<<"\n\nTarget = "<<q;
	return 0;
}
