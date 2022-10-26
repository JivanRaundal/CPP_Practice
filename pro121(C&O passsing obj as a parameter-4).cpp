//					CLASS AND OBJECT
// PASSING OBJECT AS A PARAMETER TO MEMBER FUNCTION
// Q. Complete the add() function in following code.
//    Add the x and y of T1 & T2 and store the result of corrosponding x & y in x & y of T3.

#include<iostream>
using namespace std;

class Num
{
	public:
		int x, y;
		void add(Num N1,Num N2)
		{
			// x & y of T3 will be directly accessible in add() bcz T3 is calling object
			x = N1.x + N2.x;
			y = N1.y + N2.y; 
		}
};

int main()
{
	Num T1,T2,T3;
	
	T1.x = 2;
	T1.y = 4;
	T2.x = 10;
	T2.y = 15;
	
	T3.add(T1,T2);	//here, T1 is copied in N1 & T2 is copied in N2 in add() function.
	
	cout<<"\nResult :";
	cout<<"\nT3.x = "<<T3.x<<"\tT3.y = "<<T3.y;
	return 0;
}
