//		FILE HANDLING
// # Binary Files :-
// Note - To work with binary files we have to use open file file in binary mode i.e. in ios::binary mode
// Note - To write data in Binary Format we have write() function.
//        & To read data written in binary format we have read() function.
// SYNTAX :-	fstream fobj;
// 1) write() :- fobj.write((char*)(Address_of_var_to_write),sizeof(var));
// 2) read()  :- fobj.read((char*)(Address_of_var_in_which_data_is_read),sizeof(var));
// example :-

#include<iostream>
#include<fstream>
using namespace std;

int main()
{
	fstream fobj;
fobj.open("C:\\Users\\Jivan\\OneDrive\\Desktop\\cpp class\\file_handling_txt\\pro333.txt",ios::in|ios::out|ios::binary);
	if(fobj.fail())
	{
		cout<<"\nNot Connected";
		exit(1);
	}
	
	int a,b;
	a = 90;		//a will be written in binary mode in pro333.txt using write() function
	fobj.write((char*)&a,sizeof(a));
	fobj.seekg(0,ios::beg);		//it is necessary to move file object of fstream class back.
	//now a will be read in b from binary format using read() function
	fobj.read((char*)&b,sizeof(b));
	cout<<"\nb = "<<b;
	
	fobj.close();
	return 0;
}

