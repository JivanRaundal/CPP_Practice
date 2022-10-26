// Initialization List :-
// example:-

#include<iostream>
using namespace std;

class Num
{
	public:
		int x,y,z;
		Num(int a,int b,int c) : x(a), y(b), z(c)	//Initialization list
		{
			//x = a;
			//y = b;
			//z = c;
		}
		void show()
		{
			cout<<"\nx = "<<x<<"\ty = "<<y<<"\tz = "<<z;
		}
};

int main()
{
	Num T(2,3,4);
	T.show();
	return 0;
}
