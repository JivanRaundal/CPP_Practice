//										new Operator
// 1) Use for Runtime memory allocation .
// 2) The memory we allocate at Runtime (using new Op) gets allocated on Heap.
// 3) SYNTAX:-
//			1) pointer_var = new dataype[number_of_element]  //it is used to create one or more elements of given type.
//	    	2) pointer_var = new datatype(value)	//this syntax creates only one element of given datatype.
// 4) new Op allocates memory on the Heap and returns the address of the 0th element which is stored in pointer_var.
// 5) memory once allocated with new(on heap) cannot be destroyed automatically, we have to delete it using delete op. 
// eg- 1st syntax. 

#include<iostream>
using namespace std;

int main()
{
	int *p;
	p = new int[5];		// memory to 5 integers will be allocated at runtime on heap.
	
	cout<<"\nEnter the value : \n";
	int i;
	for(i=0; i<5; i++)
	{
		cin>>*(p+i);
	}

	cout<<"\n\nPrinting values :\n";
	for(i=0; i<5; i++)
	{
		cout<<" "<<*(p+i);
	}
	
	delete[] p;	// we have to explicitly destroy the memory allocated on Heap.
	return 0;
}
