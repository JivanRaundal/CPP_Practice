#include<iostream>
#include<fstream>
using namespace std;

int main()
{
	ofstream fout("D:\\A_REGAL_CLASSES\\CPP_class\\AA_REVISION\\myfile.txt");
	if(fout.fail())
	{
		cout<<"\nNot Connected";
		exit(5);
	}
	cout<<"\nWriting In File";
	fout<<"This is file handling tutorial\n";
	char str[50] = "My name is Jivan Raundal";
	fout<<str<<endl;
	fout.close();
	return 0;
}
