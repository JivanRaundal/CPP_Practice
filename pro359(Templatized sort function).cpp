// Template 
// Q. What if we have to sort int, float & string type array..? We have to write different functions for different type
//	  of array. But using Template, only one function can work for array with different datatypes.

#include<iostream>
using namespace std;

// Templatized sort function
template<class T>
void Sort(T array[],int n)	//note = array can also be caught using this syntax. No need of pointer here
{
	int i,j;		//n,i,j are index of array & they are integers only
	T temp;
	for(i=0; i<n; i++)
	{
		for(j=i+1; j<n; j++)
		{
			if(array[i] > array[j])
			{
				temp     = array[i];
				array[i] = array[j];
				array[j] = temp;
			}
		}
	}
}

int main()
{
	int i,n=7;
	
	int num[7] = {43,6,21,38,40,67,55};
	Sort(num,n);
	cout<<"\n\nSorted int array :\n";
	for(i=0; i<n; i++)
	{
		cout<<" "<<num[i];
	}
	
	float numf[7] = {45.78,23.04,6.7,12.25,70.43,4.5,2.4};
	Sort(numf,n);
	cout<<"\n\nSorted float array :\n";
	for(i=0; i<n; i++)
	{
		cout<<" "<<numf[i];
	}
	
	//Note - Treat string type strings as a premitive datatype like int, float & char in C++
	string str[7] = {"pqr","abc","wdu","fri","xyz","uvw","skn"};
	Sort(str,n);
	cout<<"\n\nSorted string array :\n";
	for(i=0; i<n; i++)
	{
		cout<<" "<<str[i];
	}
	
	return 0;
}
