// Q 5]. WAP to explain Local Classes.
// Note - class defined inside the function is called as local class for that function.

#include<iostream>
using namespace std;

void disp();

int main()
{
	class Inner
	{
		public:
			int x,y;
			void show()
			{
				cout<<"\nIn Inner show()";
				cout<<"\nx = "<<x<<"\ty = "<<y;
			}
			// Note - we cannot define show() function outside the class by any means.
	};
	
	Inner obj;	//we can create object of local class in main() only.
	obj.x = 10;
	obj.y = 20;
	obj.show();
}

void disp()
{
	//Inner var;	//error, bcz Inner class is local class of main() function.
}
