// Defining our own string class :-

#include<iostream>
#include<string.h>
using namespace std;

class String
{
	private:
		char str[100];
	public:
		friend istream& operator>>(istream & din,String & s)
		{
			din>>s.str;
			return din;
		}
		friend ostream& operator<<(ostream & dout,String s)
		{
			dout<<s.str;
			return dout;
		}
		friend void getline(istream & din,String & s)
		{
			din.getline(s.str,98,'\n');
		}
		int operator==(String s)
		{
			if(strcmp(str, s.str) == 0)
			{
				return 1;
			}
			return 0;
		}
		int length()
		{
			return strlen(str);
		}
};

int main()
{
	String str;
	cin>>str;
	cout<<str;
	cout<<"\nEnter String : ";
	cin.ignore(1);
	getline(cin,str);
	cout<<"\nString = "<<str;
	cout<<"\nLength = "<<str.length();
	
	String S1,S2;
	cout<<"\nEnter two Strings : ";
	cin>>S1>>S2;
	if(S1 == S2)
	{
		cout<<"\nEqual";
	}
	else
	{
		cout<<"\nNot Equal";
	}	
	return 0;
}
