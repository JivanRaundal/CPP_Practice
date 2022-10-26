// 				CLASS AND OBJECT
// example:-

#include<iostream>
using namespace std;

class Number
{
	public:
		int x;
		void show()
		{
			x = 90;
		}
};

int main()
{
	//Is x accessible in main() ? - YES
	//Do we need object to access it ? - YES
	Number obj;
	obj.x = 10;
	Number var;
	var.x = 20;
	cout<<"\n1-obj.x = "<<obj.x;	//before show() call
	
	//Is show() accessible in main() ? - YES
	//Do we need object to call show() ? - YES
	obj.show();	//here, obj is passed implicitly to show() funtion as parameter.
	cout<<"\n2-obj.x = "<<obj.x;	//after show() call
	return 0; 
}
