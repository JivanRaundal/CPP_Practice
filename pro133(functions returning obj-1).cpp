// 			CLASS AND OBJECT
// MEMBER FUNCTIONS RETURNING OBJECT
// Note:- All the rules are same as function returning some value or variables.
// example

#include<iostream>
using namespace std;

class Num
{
	int x,y;
	public:
		void scan()
		{
			cout<<"\nEnter x & y: ";
			cin>>x>>y;
		}
		Num add()
		{
			Num temp;
			temp.x = x + 10;
			temp.y = y + 10;
			return temp;
		}
		void show()
		{
			cout<<"\nx = "<<x<<"\ty = "<<y;
		}
};

int main()
{
	Num obj, T;
	obj.scan();
	T = obj.add();
	T.show();
	return 0;
}
