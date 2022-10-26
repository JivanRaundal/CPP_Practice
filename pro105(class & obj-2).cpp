// 					CLASS AND OBJECTS
// 1] Access Specifiers - they decide if members(datamamber & member fun) of class is accessible or not from
//						  member function and non-member function.
// 2] 3 types of Access Specifiers - 1) public, 2) private (default) & 3) protected
// 		1) public:- Members of the class which are public are accessible in member functions of their own class and
//			        accessible in non-member functions also.
//      2) private:- Members of class which are private are accessible in member functions only.
//                   - Default access specifier of class is private.

#include<iostream>
using namespace std;

class Number
{
	private:	//accessible only in member functions of class. 
		int z;	//nonstatic datamember
	public:		//accessible in member fun and non-member function.
		int x, y;	//nonstatic datamembers
		void show()	//nonstatic member function
		{
			cout<<"\nx = "<<x<<"\ty = "<<y<<"\tz = "<<z;	//z is accessible here but not outside the class
		}
};

int main()	//nonmember function of class
{
	Number T1, T2;
	
	T1.x = 10;	//accessible in main() bcz of public acccess specifier.
	T1.y = 20;
	//T1.z = 30;	//error bcz z is private.
	
	T2.x = 11;
	T2.y = 22;
	//T2.z = 33;	//error bcz z is private.
	
	T1.show();
	T2.show();
	return 0;
}
