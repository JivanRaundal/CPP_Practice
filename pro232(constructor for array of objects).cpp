//			CONSTRUCTOR
// Constructor For Array Of Object :-
// Note - If you have array of 'n' objects, default constrctor will get execute for 'n' times.
// example :-

#include<iostream>
using namespace std;

class Num
{
	public:
		int x,y;
		
		Num()
		{
			cout<<"\nIn default constructor.";
		}
		Num(int a,int b)
		{
			cout<<"\nIn 2 parameterized constructor.";
		}
};

int main()
{
	Num var(2,3);	//2 parameterized constructor will be executed
	
	Num obj[5];	//array of 5 objects, SO, 5 times default constructor will be called.
	
	return 0;
}
