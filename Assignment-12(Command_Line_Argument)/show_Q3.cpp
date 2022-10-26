// Q 3]. command => show_Q3 myfile.txt
//					show_Q3 pro1.cpp pro2.cpp ...so on
// Note - User can mention any number of files. But if user does not mention any file name give msg 'Invalid Filename'

#include<iostream>
#include<fstream>
using namespace std;

int main(int argc,char *argv[])
{
	if(argc < 2)
	{
		cout<<"\nInvalid Filename";
		exit(1);
	}
	
	cout<<"\nargc = "<<argc<<endl;
	for(int i=0; i<argc; i++)
	{
		cout<<"argv["<<i<<"] = "<<argv[i]<<endl;
	}
	
	for(int i=1; i<argc; i++)
	{
		ifstream fin(argv[i]);
		if(fin.fail())
		{
			cout<<"\nCannot Connect File";
			exit(2);
		}
	
		cout<<"\n\nReading File "<<i<<" :\n\n";
	
		char str[100];
		while(fin.eof()==0)
		{
			fin.getline(str,98,'\n');
			cout<<str<<endl;
		}
		fin.close();
	}
	return 0;
}
