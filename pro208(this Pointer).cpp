//					CLASS & OBJECT
// this POINTER:- 'this' is a keyword which stores address of calling object automatically / internally.
// 1] In previous eg(pro207), local variables with same name as that of datamember get higher priority.
//    So, to access datamembers in that case, we have to use 'this pointer' (this->).
// 2] this pointer is an inbuilt pointer which stores address of calling object automatically / internally.
// 3] We do not need to declare or initialize this pointer.
// 4] As this pointer stores address of calling object only, we cannot use this pointer in Independent functions OR
//    in Static member functions.
// 5] We can use this pointer only in Non-Static Member Functions.
// exapmle :-

#include<iostream>
using namespace std;

class Number
{
	public:
		int x,y;
		
		void set(int x,int y)
		{
			this->x = x;
			this->y = y;
		}
		
		void print()
		{
			cout<<"\nx = "<<x<<"\ty = "<<y;	
		}
		
		static void disp()
		{
			// Note - cannot use this pointer in static member function
		}
};

int main()	//cannot use this pointer in main() bcz main() is an Independent Function
{
	Number obj;
	obj.set(10,20);
	obj.print();	//10 20
	return 0;
}
