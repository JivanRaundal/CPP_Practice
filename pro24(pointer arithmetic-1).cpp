// POINTER ARITHMETIC
// Addition of integer to pointer. eg- p+1, q+2,... where p & q are pointers of int type.
// Substraction ---->1) Substraction of two pointers.	eg- sub = (q-p) ===>(eqivalent to [(q-p)/(size of datatype)]
//				|--->2) Sunstraction of integer to pointer.	eg- (p-2)

#include<iostream>
using namespace std;

int main()
{
	int num[5] = {10,20,30,40,50};
	
	int *p, *q;
	p = &num[0];	// or p = num; (bcz name of array gives base address of array.
	cout<<"\n p = "<<(long long)p;	// holds base adress of array.
	
	cout<<"\n\n\tADDITION";
	cout<<"\np+0 = "<<(long long)(p+0)<<"\t*(p+0) = "<<*(p+0);	// Addition of integer to pointer p. 
	cout<<"\np+1 = "<<(long long)(p+1)<<"\t*(p+1) = "<<*(p+1);	// internally --> p + (1 unit of int = 4 bytes)
	cout<<"\np+2 = "<<(long long)(p+2)<<"\t*(p+2) = "<<*(p+2);
	cout<<"\np+3 = "<<(long long)(p+3)<<"\t*(p+3) = "<<*(p+3);
	cout<<"\np+4 = "<<(long long)(p+4)<<"\t*(p+4) = "<<*(p+4);
	
	q = &num[4];
	cout<<"\n\n q = "<<(long long)q;
	
	cout<<"\n\n\tSUBSTRACTION";
	// substraction of 2 pointers p & q.
	cout<<"\nSubstraction of 2 pointers (q-p) = "<<(q-p); 
	cout<<"\nSubstraction of 2 pointers (p-q) = "<<(p-q );
	// In above case internally (q-p) = (q-p)/(size of dataype) 
	
	// substraction of integer to pointer. eg- (q-2)
	cout<<"\n\nq-0 = "<<(long long)(q-0)<<"\t*(q-0) = "<<*(q-0);
	cout<<"\nq-1 = "<<(long long)(q-1)<<"\t*(q-1) = "<<*(q-1);
	cout<<"\nq-2 = "<<(long long)(q-2)<<"\t*(q-2) = "<<*(q-2);
	cout<<"\nq-3 = "<<(long long)(q-3)<<"\t*(q-3) = "<<*(q-3);
	cout<<"\nq-4 = "<<(long long)(q-4)<<"\t*(q-4) = "<<*(q-4);
	
	
	return 0;
}
