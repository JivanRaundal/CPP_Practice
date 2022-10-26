// 		FILE HANDLING
// Note :- Plz, refer to Notebook Notes for theory.

#include<iostream>
#include<fstream>	//header file for file handling
using namespace std;

int main()
{
	ofstream fout("C:\\Users\\Jivan\\OneDrive\\Desktop\\cpp class\\file_handling_txt\\myfile1.txt");
	
	if(fout.fail())
	{
		cout<<"\nNot Connected";
		exit(1);	//exit value other than 0 means code executed unsuccessfully
	}
	else
	{
		cout<<"\nConnected Successfully";
	}
	
	fout<<"\nMy name is Jivan";
	fout<<"\nI am Computer Student";
	
	return 0;
}
