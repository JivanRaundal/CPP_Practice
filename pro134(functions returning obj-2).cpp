//   	 		CLASS AND OBJECT
// FUNCTIONS RETURNING VALUE
// Q. Complete the following code for given main() function.


#include<iostream>
using namespace std;

class Num
{
	int x,y;
	public:
		void scan()
		{
			cout<<"\nEnter x & y : ";
			cin>>x>>y;
		}
		Num add(Num var)
		{
			Num temp;
			temp.x = x + var.x;
			temp.y = y + var.y;
			return temp;
		}
		void show()
		{
			cout<<"\nx = "<<x<<"\ty = "<<y;
		}
};

int main()
{
	Num T1,T2,T3;
	T1.scan();
	T2.scan();
	
	T3 = T1.add(T2);	//add() fun returning object
	T3.show();
	return 0;
}
