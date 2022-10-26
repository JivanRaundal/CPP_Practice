//	Exception thrown due to new operator

// Note - 'std::bad_alloc' is an runtime exception thrown by new operator when new is unable to allocate memory.
// eg - handling runtime error due to new operator

#include<iostream>
using namespace std;

int main()
{
	double *p;
	try
	{
		for(int i=0; i<10; i++)
		{
			p = new double[5000000000];		//generates an runtime error 'std::bad_alloc'
			cout<<"\np = "<<(long long)p;
			delete[] p;
		}
	}
	catch(bad_alloc e)
	{
		cout<<"\nException caught";
	}
	cout<<"\nEnd of program";
	return 0;
}
