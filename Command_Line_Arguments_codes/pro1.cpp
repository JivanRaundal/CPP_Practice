//	command line arguments :-

#include<iostream>
using namespace std;

int main(int argc,char *argv[])
{
	cout<<"\nargc = "<<argc;
	
	cout<<"\n0th argument = "<<argv[0];		//by default 0th argument is program file name i.e. pro1
	cout<<"\n1st argument = "<<argv[1];
	cout<<"\n2nd argument = "<<argv[2];
	
	return 0;
}
