// Q 13].
// Note - In this code we will copy Test.txt in copy_Q13.txt using get() function

#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;

int main()
{
	//open Test.txt in read mode
	ifstream fin("Test.txt");
	//open copy_Q13.txt in write mode
	ofstream fout("copy_Q13.txt");
	if(fin.fail() || fout.fail())
	{
		cout<<"\nCan't Connect";
		exit(1);
	}
	
	char ch;
	while(fin.eof()==0)
	{
		fin.get(ch);
		fout<<ch;
	}
	cout<<"\nCopied Successfully.";
	
	fin.close();
	fout.close();
	return 0;
}
