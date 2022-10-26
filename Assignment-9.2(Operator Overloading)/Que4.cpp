// Q 4]. Complete the class definition for given main() funtion.

#include<iostream>
#include<string.h>
using namespace std;

class Mystring
{
		char str[50];
	public:
		int operator>(Mystring S)
		{
			if(strcmp(str, S.str) == 1)
			{
				return 1;
			}
			else if(strcmp(str, S.str) == -1)
			{
				return 0;
			}
			else
			{
				//both strings are same
				return 1;	//OR return 0;
			}
		}
		
		friend istream& operator>>(istream & din, Mystring & T);
		friend ostream& operator<<(ostream & dout, Mystring T);
};

istream& operator>>(istream & din, Mystring & T)
{
	din.getline(T.str,48,'\n');
	return din;
}

ostream& operator<<(ostream & dout, Mystring T)
{
	dout<<T.str;
	return dout;
}

int main()
{
	Mystring s1,s2,s3;
	cout<<"\nEnter String1 & String2 :\n";
	cin>>s1>>s2;
	if(s1 > s2)
	{
		cout<<"\n"<<s2<<" will go first in dictionary";
	}
	else
	{
		cout<<"\n"<<s1<<" will go first in dictionary";
	}
	return 0;
}
