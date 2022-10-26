// Operator Overloading
// Overloading Unary operator using friend/Independent function :

#include<iostream>
using namespace std;

class Num
{
	private:
		int x,y;
	public:
		Num()
		{
			x = y = 0;
		}
		void scan()
		{
			cout<<"\nEnter x & y :\n";
			cin>>x>>y;
		}
		void show()
		{
			cout<<"\nx = "<<x<<"\ty = "<<y;
		}
		
		friend void operator++(Num & Temp);
};

//overloading unary pre-increment(++) operator
void operator++(Num & Temp)
{
	Temp.x = Temp.x + 1;
	Temp.y = Temp.y + 1;
}

int main()
{
	Num obj;
	obj.scan();
	obj.show();
	
	++obj;
	//operator++(obj);
	
	obj.show();
	return 0;
}
