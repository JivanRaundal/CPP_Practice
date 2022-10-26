// Q 3]. WAP to explain constatnt member function.
// Note - calling objects becomes constatnt object in constant member function. So, datamembers of calling
//        object cannot be changed .

#include<iostream>
using namespace std;

class Num
{
	public:
		int x,y;
		
		void set()
		{
			x = 5;
			y = 0;
		}
		
		void change(Num & Temp) const		//constant member function
		{
			// x = x + 1;	//error, cannot change bcz calling object becomes constant
			Temp.x = x + 3;
			Temp.y = y + 5;
		}
		
		void show()
		{
			cout<<"\nx = "<<x<<"\ty = "<<y;
		}
};

int main()
{
	Num obj,var;
	var.set();
	var.show();
	var.change(obj);
	obj.show();
	
	return 0;
}
