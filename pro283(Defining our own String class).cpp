// Defining Our Own String class.

#include<iostream>
#include<string.h>
using namespace std;

class mystring
{
	private:
		char str[30];
	public:
		int length()	//returns length of string
		{
			int l;
			l = strlen(str);
			return l;
		}
		
		int operator==(mystring T)	//overloaded == operator
		{
			if(strcmp(str,T.str)==0)
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		
		int operator>(mystring T)	//overloaded > operator
		{
			if(strcmp(str,T.str)==1)
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		
		int operator<(mystring T)	//overloaded < operator
		{
			if(strcmp(str,T.str)==-1)
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		
		mystring append(mystring T)	//append() member function which returns appended string
		{
			mystring S;
			int i=0;
			while(str[i] != '\0')
			{
				S.str[i] = str[i];
				i++;
			}
			//S.str[i] = '\0';
			//i--;
			int j = 0;
			while(T.str[j] != '\0')
			{
				S.str[i] = T.str[j];
				i++;
				j++;
			}
			S.str[i] = '\0';
			return S;
		}
		
		int compare(mystring T)	//returns 1,-1,0 according to comparison result
		{
			int x;
			x = strcmp(str,T.str);
			return x;
		}
		
		int find(char ch)	//returns 1 is character is found, else returns 0
		{
			int i=0, flag = 0;
			while(str[i] != '\0')
			{
				if(str[i] == ch)
				{
					flag = 1;
				}
				i++;
			}
			if(flag == 1)
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		
		friend istream& operator>>(istream & din, mystring & T);
		friend ostream& operator<<(ostream & dout, mystring T);
		friend void getline(istream & din, mystring & T);
};

istream& operator>>(istream & din, mystring & T)
{
	//din.getline(T.str,98,'\n');
	din>>T.str;
	return din;
}

ostream& operator<<(ostream & dout, mystring T)
{
	dout<<T.str;
	return dout;
}

void getline(istream & din, mystring & T)	//our own getline() function
{
	din.getline(T.str,98,'\n');
}

int main()
{
	mystring S1,S2;
	cout<<"\nEnter string 1 : ";
	//cin>>S1;	//will not scan space separated string
	getline(cin,S1);	//our own getline() function for string
	cout<<"\nEnter string 2 : ";
	//cin>>S2;	//will not scan space separated string
	getline(cin,S2);	//our own getline() function for string
	
	cout<<"\nString 1 = "<<S1;
	cout<<"\nString 2 = "<<S2;
	
	cout<<"\nLength of S1 = "<<S1.length();
	cout<<"\nLength of S2 = "<<S2.length();
	
	if(S1 > S2)
	{
		cout<<"\n["<<S1<<"] is greater than ["<<S2<<"].";
	}
	else if( S1 < S2)
	{
		cout<<"\n["<<S1<<"] is smaller than ["<<S2<<"].";
	}
	else
	{
		cout<<"\nBoth strings are Equal.";
	}
	
	mystring S3;
	cout<<"\n\nEnter String 3 : ";
	getline(cin,S3);	//our own getline() function for string
	cout<<"\nString 3 = "<<S3;
	
	mystring S4;
	S4 = S1.append(S2);
	cout<<"\n\nAppended string of S1 & S2 = "<<S4;
	cout<<"\nLength of string S4 = "<<S4.length();
	
	int x = S1.compare(S2);
	cout<<"\nS1.compare(S2) = "<<x;
	

	int	y = S1.find('v');	//returns 1 if 'v' is present in S1 else returns 0;
	if(y == 1)
	{
		cout<<"\n\ncharacter 'v' is Present in string.";
	}
	else
	{
		cout<<"\n\nCharacter 'v' is not Present in the string";
	}
	
	return 0;
}
