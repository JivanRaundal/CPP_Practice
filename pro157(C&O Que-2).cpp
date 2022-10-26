// Practice Questions
// Q. complete the code for given main() function.

#include<iostream>
using namespace std;

class Num
{
	public:
		int x,y;
		
		void show()	//non-static member function 
		{
			cout<<"\nx = "<<x<<"\ty = "<<y;
		}
};

//function returning object of type Num
Num scan()	//non-member function / Independent function
{
	Num temp;
	cout<<"\nEnter x & y : ";
	cin>>temp.x>>temp.y;
	return temp;
}

int main()
{
	Num T1,T2;
	T1 = scan();
	T2 = scan();
	T1.show();
	T2.show();
	return 0;
}
