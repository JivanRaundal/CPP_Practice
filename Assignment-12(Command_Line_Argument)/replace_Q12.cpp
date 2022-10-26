// Q 12].	command => replace source_word target_word filename.txt
//		replace command will replace source_word by target_word in filename.txt
//		eg - replace cpp java filename.txt
//			 here, every cpp word will get replaced by java word in filename.txt
// Note - string::npos => npos is static datamember of inbuilt class string. It gives last index of string type string.
//						  It actually means 'until the end of file' 

#include<iostream>
#include<string.h>
#include<string>
#include<fstream>
using namespace std;

int main(int argc,char *argv[])
{
	if(argc < 4 || argc > 4)
	{
		cout<<"\nInvalid arguments";
		exit(1);
	}
	
	cout<<"\nargc = "<<argc<<endl;
	for(int i=0; i<argc; i++)
	{
		cout<<"argv["<<i<<"] = "<<argv[i]<<endl;
	}
	
	fstream fobj(argv[3],ios::in | ios::out);
	if(fobj.fail())
	{
		cout<<"\nCannot Connect file";
		exit(2);
	}
	
	int ind;
	string str;
	string sub_str = argv[2];
	
	while(fobj.eof()==0)
	{
		getline(fobj,str);
		
		while((ind = str.find(argv[1])) != string::npos)
		{
			str.replace(ind, sub_str.length(), sub_str);
		}
		
		fobj<<str<<endl;
	}
	cout<<"\nSuccessfully replaced";
	
	fobj.close();
	return 0;
}
