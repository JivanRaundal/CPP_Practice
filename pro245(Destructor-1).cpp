/*				DESTRUCTORS 
 1] Destructor does not destroy the object.
 2] We use destructor to execute that code which we want to execute at the time of object destruction. Mostly,
    Destructors are used to free resources at the time of object destruction.
 3] The name of destructor is same as that of class name, preceded by tilt(~) sign.
 4] Destructor gets called automatically just before object goes out of scope.
 5] Destructor has no returntype, not even void.
 6] We cannot pass parameter to destructor. Hence no destructor overloading.
 7] We can define only one destructor for whole class.
 8] Destructors cannot be static.
 9] No default destructor is provided by compiler like constructor.
 10] We can define destructor outside the class using Membership Identity Label.
 11] Destructor of one class can be friend of another class.
 12] Destructors cannot be Inherited.
 13] Destructors can be Virtual. But constructors can't.
 14] When Multiple objects go out of same scope, destructor for each of them gets called in the Reverse direction
     of their constructor/creation.
 15] We can call destructor Explicitly using object name & .(dot) operator. But we have to suffer consequences.
*/
//example : -

#include<iostream>
using namespace std;

class Num
{
	public:
		int x;
		Num()	//constructor
		{
			cout<<"\nObject created.";
		}
		~Num()	//destructor
		{
			cout<<"\nObject destroyed.";
		}
};

int main()
{
	cout<<"\nBefore inner scope.";
	{
		Num obj;	//constructor will called
		obj.x = 10;
		cout<<"\nx = "<<obj.x;
		//destructor will be called just before when object is going out of scope.
	}
	//obj.x = 20;	//error- obj is not declared in this scope(it is declared in Inner scope & not accessible Outside)
	cout<<"\nAfter inner scope.";
	return 0;
}
