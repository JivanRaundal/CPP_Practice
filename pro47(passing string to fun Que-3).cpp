// 								PASSING STRING TO FUNCTION
// Same as array only because string is nothing but a char array.

// Q.Scan and print length of array. write separate function to find length.

#include<iostream>
using namespace std;

void length(char *p)
{
	int i=0;
	while(*(p+i) != '\0')
	{
		i++;
	}
	cout<<"\n\nLength of string is : "<<i;	// Or return i
}

int main()
{
	char str[30];
	
	cout<<"\nEnter string : ";
	cin.getline(str, 28);
	cout<<"\nYou entered : "<<str;
	
	length(&str[0]);
	
	return 0;	
} 
