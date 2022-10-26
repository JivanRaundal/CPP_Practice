// Q 4].	command => merge file1.txt file2.txt target.txt

#include<iostream>
#include<fstream>
using namespace std;

int main(int argc,char *argv[])
{
	if(argc < 4 || argc > 4)
	{
		cout<<"\nInvalid Filenames than required";
		exit(1);
	}
	
	cout<<"\nargc = "<<argc<<endl;
	for(int i=0; i<argc; i++)
	{
		cout<<"argv["<<i<<"] = "<<argv[i]<<endl;
	}
	
	ofstream fout(argv[3]);		//target.txt in write mode
	if(fout.fail())
	{
		cout<<"\nCannot Connect file";
		exit(2);
	}
	
	for(int i=1; i<(argc-1); i++)
	{
		ifstream fin(argv[i]);		//files will be opend in read mode
		if(fin.fail())
		{
			cout<<"\nCannot Connect file";
			exit(3);
		}
		
		char str[100];
		while(fin.eof()==0)
		{
			fin.getline(str,98,'\n');
			fout<<str<<endl;
		}
		fin.close();
	}
	
	cout<<"\nFiles Merged Successfully";
	fout.close();
	return 0;
}
