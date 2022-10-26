// Q 20]. Scan a string and count number of words recursively.

#include<iostream>
using namespace std;

int count;
void count_words(char *p,int i)
{
	if(*(p+i)=='\0')
	{
		cout<<"\nTotal number of words in string are : "<<count+1;
		return;
	}
	else
	{
		if(*(p+i)==' ')
		{
			count++;
		}
		count_words(p,i+1);
	}
}

int main()
{
	char str[100];
	cout<<"\nEnter the string : ";
	cin.getline(str,98,'\n');
	
	count_words(str,0);
	return 0;
}
