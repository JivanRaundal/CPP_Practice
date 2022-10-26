// Q 14].

#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;

int main()
{
	//open school_Q14.txt in read mode
	ifstream fin("school_Q14.txt");
	//open college_Q14.txt in write mode
	ofstream fout("college_Q14.txt");
	if(fin.fail() || fout.fail())
	{
		cout<<"\nCan't Connect";
		exit(1);
	}
	
	char ch;
	int count = 0;
	
	while(!fin.eof())
	{
		fin.get(ch);
		while(ch==' ')
		{
			if(count==0)
			{
				fout<<ch;	// OR fout.put(ch);
			}
			fin.get(ch);
			count++;
		}
		fout<<ch;		   // OR fout.put(ch);
		count = 0;
	}
	cout<<"\nFile is copied in proper format by removing extra spaces.";
	
	fin.close();
	fout.close();
	return 0;
}
