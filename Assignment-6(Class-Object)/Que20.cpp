// Q 20] scan 6 names of employees from user using array of pointers.
//       sort them in ascending order & print.

#include<iostream>
#include<string.h>
using namespace std;

char* get_name()
{
	char str[20];
	char *p;
	cout<<"\nEnter Name : ";
	cin.getline(str,18,'\n');
	int length;
	length = strlen(str);
	p = new char[length+1];
	strcpy(p, str);
	return p;
}

int main()
{
	char * employee[6];	//array of pointers
	int i,j;
	//scanning employee's names
	for(i=0; i<6; i++)
	{
		employee[i] = get_name();
	}
	
	//printing Names
	cout<<"\n\nEmployee's names before sorting are :\n";
	for(i=0; i<6; i++)
	{
		cout<<"\n"<<i+1<<") "<<employee[i];
	}
	
	//sorting employee's by name
	int x;
	char temp[20];
	for(i=0; i<6; i++)
	{
		for(j=i+1; j<6; j++)
		{
			x = strcmp(employee[i], employee[j]);
			if(x==1)	//x = +1 means employee[i] is greater than employee[j] i.e by their ASCII values
			{
				strcpy(temp, employee[i]);
				strcpy(employee[i], employee[j]);
				strcpy(employee[j], temp);
			}
		}
	}
	
	//printing Names
	cout<<"\n\nEmployee's names After sorting are :\n";
	for(i=0; i<6; i++)
	{
		cout<<"\n"<<i+1<<") "<<employee[i];
	}
	
	//deleting runtime memory
	for(i=0; i<6; i++)
	{
		delete[] employee[i];
	}
	return 0;
}
