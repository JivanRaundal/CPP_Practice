// Q 6] Scan a string from user and copy it in another string. Write whole code in main() only. 
//      (use square bracket notation)

#include<iostream>
using namespace std;

int main()
{
	char source[100];
	char target[100];
	
	cout<<"\nEnter the source string : ";
	cin.getline(&source[0],98,'\n');
	cout<<"\nSource = "<<&source[0];
	
	int i=0;
	while(source[i]!='\0')
	{
		target[i] = source[i];
		i++;
	}
	target[i] = '\0';	//OR target = source[i];
	cout<<"\n\nTarget = "<<&target[0];
	return 0;
}
