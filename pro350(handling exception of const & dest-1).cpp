//	Handling exceptions in case of constructor & destructor :-

// Note :- When try block throws an exception, control leaves try block & all the local variables get destroyed
//		   that's why destructor will get execute for objects.
// eg - 

#include<iostream>
using namespace std;

class Num
{
	public:
		Num()
		{
			cout<<"\nIn constructor";
		}
		~Num()
		{
			cout<<"\nIn destructor";
		}
};

int main()
{
	try
	{
		Num obj;
		throw 5;
	}
	catch(int x)
	{
		cout<<"\nException caught";
	}
	return 0;
}
