// 					CLASS & OBJECT
//	LOCAL CLASSES :-
//	Note - Local classes are nothing but class inside the function.
//         We can create object of that class inside the function in which it is defined as a local class.
//         As the name suggest local, we cannot access local class of one function inside another function.
//	Note - As class is local & accessible only in it's function, we cannot define the member function of local class
//         Outside the class in any way. Also not using Membership Identity Label.
//         And also not Outside the class & inside the function also - Because we cannot define one function in another.
//         We can only call one function from another but can't define one function in another.

#include<iostream>
using namespace std;

void myfun();

int main()
{
	class Inner		//Local class of function main().
	{
		public:
			int y;
			void show()
			{
				cout<<"\nIn Inner show(), y = "<<y;
			}
	};
	Inner obj;
	obj.y = 10;
	obj.show();
	
	return 0;
}

void myfun()
{
	//Inner var;	//error, because we cannot create object of local class otside another function.
}
