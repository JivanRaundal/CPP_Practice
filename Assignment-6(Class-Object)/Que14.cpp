// Q 14] Complete the given code for given class. scan details of 2 objects and print them using given member function.
//		 Do not add your extra member functions.
//       You can add parameters to scan() & show().

#include<iostream>
using namespace std;

class Digit
{
		int x,y;
	public:
		
		static void scan(Digit & T)	//static member function works for class & not object
		{
			cout<<"\nEnter x & y : ";
			cin>>T.x>>T.y;
		}
		
		void show()	//non-static datamember works for object
		{
			cout<<"\nx = "<<x<<"\ty = "<<y;
		}
};

int main()
{
	Digit D1,D2;
	
	Digit::scan(D1);
	Digit::scan(D2);
	
	D1.show();
	D2.show();
	return 0;
}
