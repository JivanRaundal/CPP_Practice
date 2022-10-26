//	Exception thrown due to new operator

// Note - 'std::bad_alloc' is an runtime exception thrown by new operator when new is unable to allocate memory.
// eg - 

#include<iostream>
using namespace std;

int main()
{
	double *p;
	for(int i=0; i<10; i++)
	{
		p = new double[5000000000];		//generates an runtime error 'std::bad_alloc'
		cout<<"\np = "<<(long long)p;
		delete[] p;
	}
	cout<<"\nEnd of program";
	return 0;
}
