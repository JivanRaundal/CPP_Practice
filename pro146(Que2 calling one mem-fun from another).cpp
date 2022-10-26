// 								CLASS AND OBJECT
// CALLING ONE MEMBER FUNCTION FROM ANOTHER.
// Q.complete the code for given function call in main() fun and add() function should be private.

#include<iostream>
using namespace std;

class Num
{
	private:
		int x,y;
		
		Num add(Num N)
		{
			Num temp1;
			temp1.x = x + N.x;
			temp1.y = y + N.y;
			return temp1;
		}
		
	public:
		void scan()
		{
			cout<<"\nEnter x & y : ";
			cin>>x>>y;
		}
		
		void print()
		{
			cout<<"\nx = "<<x<<"\ty = "<<y<<endl;
		}
		
		Num myfun(Num T)
		{
			Num temp2;
			temp2 = add(T);
			return temp2;
		}
};

int main()
{
	Num T1,T2,T3;
	T1.scan();
	T2.scan();
	
	T3 = T1.myfun(T2);
	T3.print();
	return 0;
}
