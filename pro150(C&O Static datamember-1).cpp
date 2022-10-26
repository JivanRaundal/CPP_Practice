//					CLASS AND OBJECT
// STATIC DATA MEMBERS:-
// 1] To declare a datamember static, prefix it's declaration with static keyword.	eg- (static int var_name;)
// 2] It works for class only & not for any specific object. Means only one copy of static datamember get's created 
//    (on data section) for whole class. Therefore all the objects of the class access that single copy.
//    Hence, changes made by any object in static datamember are visible to all other object.
// 3] Static datamember must be defined outside the class using Membership Identity Label. (using class_name & :: op)
// 4] Static datamember can be initialized at the declaration outside the class but not at the declaration inside class.
//    [Note - cannot initialized datamembers(both static/non-static) inside the class at the time of declaration.]
 
// example:-

#include<iostream>
using namespace std;

class Number
{
	public:
		static int x;	//static datamember works for class only
		int y;	//non-static datamember works for object only
		
		void set()
		{
			x = 0;
			y = 0;
		}
		void change()
		{
			x = x + 1;
			y = y + 1;
		}
		void show()
		{
			cout<<"\nx = "<<x<<"\ty = "<<y;
		}
};

int Number::x;	//declaration of static datamember outside the class is neccessary 

int main()
{
	Number T1,T2,T3;
	
	T1.set();
	T2.set();
	T3.set();
	
	T1.change();
	T1.show();
	
	T2.change();
	T2.show();
	
	T3.change();
	T3.show();
	
	return 0;
}
