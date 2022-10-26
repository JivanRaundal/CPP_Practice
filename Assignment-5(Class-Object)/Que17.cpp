// Q 17]. For following main() function, scan 2 integers and print their 4 arithmetic operations.
//        condition - Do not declare any extra variable.
//        int main()
//        {	  int *p;
//        }

#include<iostream>
using namespace std;

int main()
{
	int *p;
	p = new int[2];
	
	cout<<"\nEnter first integer : ";
	cin>>*(p+0);
	cout<<"\nEnter second integer : ";
	cin>>*(p+1);
	
	//arithmetic operations
	cout<<"\nAddition : "<<*(p+0) + *(p+1);
	cout<<"\nSubstraction : "<<*(p+0) - *(p+1);
	cout<<"\nMultiplication : "<<(*(p+0)) * (*(p+1));
	cout<<"\nDivision : "<<*(p+0) / *(p+1);
	
	delete[] p;
	return 0;
}
