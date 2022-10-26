//				DESTRUCTOR
// DESTRUCTOR FOR RUNTIME OBJECT :-
// Note - No destructor will get called for Runtime created objects Bcz runtime objects get memory on heap & it does 
//        not destoyed with scope(block of declaration). To call destructor for runtime object we have to use delete
//		  operator so that when runtime object is about to destroy, destructor will get called.
//example :-

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
	Num *q;
	{
		Num *p;
		p = new Num();
		delete p;	//now destructor will get called for runtime object bcz of this statement
		q = p;	
	}
	cout<<"\nq->x = "<<q->x<<"\tq->y = "<<q->y;	//garbage garbage
	return 0;
}
