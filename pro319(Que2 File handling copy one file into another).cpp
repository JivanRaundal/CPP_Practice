// Q 2]. WAP to copy one file into another file.

#include<iostream>
#include<fstream>
using namespace std;

int main()
{
	//file in which content is to be copied should be opend in ios::out (write) mode. using ofstream class
	ofstream fout("C:\\Users\\Jivan\\OneDrive\\Desktop\\cpp class\\file_handling_txt\\myfile3.txt");
	//file whose contents are to be copied should be opened in ios::in (read) mode.	using ifstream class
	ifstream fin("C:\\Users\\Jivan\\OneDrive\\Desktop\\cpp class\\file_handling_txt\\myfile2.txt");
	
	if(fout.fail() || fin.fail())
	{
		cout<<"\nCan't Connect file";
		exit(1);
	}
	
	char str[100];
	while(fin.eof()==0)
	{
		fin.getline(str,98);	//read from myfile2
		fout<<str<<endl;		//write to myfile1
	}
	
	cout<<"\nFile Successfully Copied....";
	
	fout.close();
	fin.close();
	return 0;
}
