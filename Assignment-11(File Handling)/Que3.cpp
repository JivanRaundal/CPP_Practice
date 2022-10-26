// Q 3].

#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;

int main()
{
	char country[20];
	char capital[20];
	
	ifstream fin("Country_Q3.txt");
	if(fin.fail())
	{
		cout<<"\nCannot connect";
		exit(1);
	}
	
	ifstream din("Capital_Q3.txt");
	if(din.fail())
	{
		cout<<"\nCannot connect";
		exit(2);
	}
	
	ofstream fout("Result_Q3.txt");
	if(fout.fail())
	{
		cout<<"\nCannot connect";
		exit(3);
	}
	
	while(!fin.eof() && !din.eof())
	{
		fin.getline(country,18,'\n');
		din.getline(capital,18,'\n');
		fout<<country<<"\t\t"<<capital<<endl;
	}
	
	cout<<"\nSuccessfull";
	//closing all files
	fin.close();
	din.close();
	fout.close();
	return 0;
}
	
