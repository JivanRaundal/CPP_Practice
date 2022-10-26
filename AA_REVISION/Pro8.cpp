// Operator Overloading
// Overloading Unary operator using member function :

#include<iostream>
using namespace std;

class Num
{
	private:
		int x,y;
		
	public:
		void scan()
		{
			cout<<"\nEnter x & y : ";
			cin>>x>>y;
		}
		void show()
		{
			cout<<"\nx = "<<x<<"\ty = "<<y;
		}
		
		//overloading pre-increment (++) operator
		void operator++()
		{
			this->x = this->x + 1;
			this->y = this->y + 1;
		}
};

int main()
{
	Num obj;
	obj.scan();
	obj.show();
	//obj.operator++();
	++obj;
	obj.show();
	return 0;
}
