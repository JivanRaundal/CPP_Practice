// C++ Strings :-

#include<iostream>
#include<string.h>
#include<iomanip>
using namespace std;

/*int main()
{
	char str[5] = {'H','E','L','L','O'};		//accessing char array as a normal char array
	
	char str2[8] = "HELLO";						//accessing char array as a string 	
	int i;
	
	cout<<"\nStr = ";					
	for(i=0; i<5; i++)
	{
		cout<<" "<<str[i];
	}
	
	cout<<"\nstr2 = "<<str2;			//no need to use loop, bch it has terminating character '\0' at the end
	return 0;
}*/

/*int main()
{
	//find length of string
	char str[20];
	cout<<"\nEnter String : ";
	cin.getline(str,18,'\n');
	cout<<"\nString = "<<str;
	
	int i=0;
	while(str[i] != '\0')
	{
		i++;
	}
	cout<<"\nLength = "<<i;
	return 0;
}*/

/*
int length(char * p)
{
	int i=0;
	while(*(p+i) != '\0')
	{
		i++;
	}
	return i;
}

int main()
{
	char str[20];
	cout<<"\nEnter string : ";
	cin.getline(str,18,'\n');
	cout<<"\nString = "<<str;
	
	cout<<"\nLength = "<<length(str);
	return 0;
}
*/

/*
int main()
{
	//find capital letters from string using pointer notation
	char str[20];
	char * p = &str[0];		//OR char * p = str;
	
	cout<<"\nEnter String : ";
	cin.getline(p,18,'\n');
	int i=0,count=0;
	
	while(*(p+i) != '\0')
	{
		if(*(p+i) >= 'A' && *(p+i) <= 'Z')
		{
			count++;
		}
		i++;
	}
	cout<<"\nTotal capital alphabets in string = "<<count;
	return 0;
}
*/

/*
int main()
{
	char str[10];
	cout<<"\nEnter String : ";
	cin>>str;
	
	char * p = str;
	for(int i=0; *(p+i)!='\0'; i++)
	{
		cout<<*(p+i);
	}
	return 0;
}
*/

/*
void copy(char * t,char * s)
{
	int i=0;
	while(*(s+i) != '\0')
	{
		*(t+i) = *(s+i);
		i++;
	}
	*(t+i) = '\0';		//to insert '\0' at the end of target string
}

int main()
{
	//Q. scan a string from user, copy it in another string, Write your own copy() function
	char source[30], target[30];
	cout<<"\nEnter source string : ";
	cin.getline(source,28,'\n');
	
	copy(target,source);
	
	cout<<"\nSource string = "<<source;
	cout<<"\nTarget string = "<<target;
	return 0;
}
*/

/*
int main()
{
	//inbuilt functions strlen() & strcpy()
	char source[30], target[30];
	cout<<"\nEnter source string = ";
	cin.getline(source,28);
	
	cout<<"\nSource string = "<<source;
	int len1 = strlen(source);		//strlen() returns length of string
	cout<<"\nLength of source string = "<<len1;
	
	strcpy(target,source);		//will copy source string into target string
	
	cout<<"\nTarget string = "<<target;
	int len2 = strlen(target);
	cout<<"\nLength of target string = "<<len2;
	return 0;
}
*/

/* //Note:- we can't use delete operator to free memory on stack 
int main()
{
	char str[100];
	cout<<"\nEnter String : ";
	cin.getline(str,98,'\n');
	int len = strlen(str);
	char * p;
	p = new char[len+1];
	strcpy(p,str);
	cout<<"\nYou entered = "<<p;
	return 0;
}
*/

/*
int main()
{
	char * s;
	s = new char[100];
	cout<<"\nEnter string : ";
	cin.getline(s,98,'\n');
	
	int len = strlen(s);
	char * p = new char[len+1];
	strcpy(p,s);
	delete s;
	
	cout<<"\nYou entered = "<<p;
	return 0;
}
*/

/*
char* create()
{
	char str[100];			//local array will destroy with stackframe HENCE, memory is saved
	cout<<"\nEnter string : ";
	cin.getline(str,98,'\n');
	
	int len = strlen(str);
	char * p = new char[len+1];
	strcpy(p,str);
	
	return p;
}

int main()
{
	char * str;
	str = create();		//create() will create string & returns reference of string
	cout<<"\nYou entered = "<<str;
	return 0;
}
*/

/*
int main()
{
	//Q. Scan 2 strings from user, check which will go first in dictionary.
	char str1[20];
	char str2[20];
	cout<<"\nEnter str1 : ";
	cin.getline(str1,18,'\n');
	cout<<"\nEnter str2 : ";
	cin.getline(str2,18,'\n');
	
	int x = strcmp(str1,str2);		//will return 0,1,-1
	if(x == -1)
	{
		cout<<"\nstr1 will go first";
	}
	else if(x == 1)
	{
		cout<<"\nstr2 will go first";
	}
	else   //x==0
	{
		cout<<"\nBoth strings are equal, anyone can go first";
	}
	return 0;
}
*/

int main()
{
	//setw() => feild width manipulator, used for formatting output.
	int m,n,p;
	m = 98;
	n = 85642;
	p = 6;
	
	cout<<"\nm = "<<setw(10)<<m;
	cout<<"\nn = "<<setw(10)<<n;
	cout<<"\np = "<<setw(10)<<p;
	return 0;
}




