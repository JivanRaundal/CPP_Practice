//					CONSTRUCTOR
// 1] Constructor is a special member function of class whose name is same as that of class name.
// 2] Constructors have no returntype, not even void.
// 3] We do not need to call constructor explicitly, constructor get's call automatically when we create an object of
//    that class.
// 4] We can define multiple constructors in one class with different parameter list. We called it constructor 
//    overloading (i.e function overloading). therefore, constructor's can be overloaded.
// 5] (hindi) - Ek object ke liye sirf ek constructor execute hota hai. Lekin ek constructor multiple object's keliye
//    execute ho sakta hai.
// 6] Note - constructor is always required for the creation of object. If you didn't defined any constructor in class,
//           compiler automatically generates default constructor for object. (with no parameters / blank function) 
// 7] Always defined constructor under public access-specifier. (reason in next code)
// 8] constructor's cannot be static, as they always works for object.
// 9] We can make constructor of one class as a friend of another class.
// 10] Constructor's cannot be Inherited.
// 11] Constructor's cannot be Virtual.
// 12] The purpose of the constructor is to execute the code which we want to execute at the time of object creation.
//     Mostly, we use constructor's to Initialize our datamembers to avoid the possibility of Garbage.
// Note - Constructor Types => 1) default constructor, 2) parameterized constructor & 3) copy constructor.
// example:-

#include<iostream>
using namespace std;

class Num
{
	public:
		int x,y;
		
		Num()	//default constructor
		{
			cout<<"\nIn default constructor.";
		}
		
		Num(int a,int b)	//parameterized constructor
		{
			cout<<"\nIn 2 parameterized constructor.";
			x = a;
			y = b;
		}
		
		void show()
		{
			cout<<"\nx = "<<x<<"\ty = "<<y;
		}
};

int main()
{
	Num obj;	//default constructor will be automatically called
	Num var(2,3);	//parameterized constructor will be automatically called
	var.show();		//2	3
	return 0;
}
