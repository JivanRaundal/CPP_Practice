// 		FILE HANDLING
// # ios::ate :-

#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;

int main()
{
	fstream fobj;
//fobj.open("C:\\Users\\Jivan\\OneDrive\\Desktop\\cpp class\\file_handling_txt\\pro329.txt",ios::in|ios::out|ios::app);
fobj.open("C:\\Users\\Jivan\\OneDrive\\Desktop\\cpp class\\file_handling_txt\\pro329.txt",ios::in|ios::out|ios::ate);
	
	int x;
	x = fobj.tellg();
	cout<<"\nx = "<<x;	//with ios::app => 0 and with ios::ate => 200
	
	fobj.seekp(0,ios::beg);
	fobj<<"\nPICT";
	
	fobj.close();	
	return 0;
}
