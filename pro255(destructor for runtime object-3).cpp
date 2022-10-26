//				DESTRUCTOR
// DESTRUCTOR FOR RUNTIME OBJECT :-
// Note - No destructor will get called for Runtime created objects Bcz runtime objects get memory on heap & it does 
//        not destoyed with scope(block of declaration). To call destructor for runtime object we have to use delete
//		  operator so that when runtime object is about to destroy, destructor will get called.
//example :- destructor for Array of runtime objects

#include<iostream>
using namespace std;

class Num
{
	public:
		int x,y;
		Num()
		{
			x = 90;
			y = 70;
			cout<<"\nobject created";
		}
		~Num()
		{
			cout<<"\nobject destroyed";
		}
};

int main()
{
	Num *p;
	p = new Num[5];	//array of runtime objects
	//delete p;	 //it will call destructor (p+0) i.e. for 1st object only.
	delete[] p;	 //it will call destructor for all runtime objects
	return 0;
}

