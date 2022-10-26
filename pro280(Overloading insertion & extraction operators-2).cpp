// OVERLOADING INSERTION (<<) & EXTRACTION (>>) OPERATORS          
// THEORY :-
// 1] To use cin, cout with user-defined datatypes (eg- cin>>T1>>T2; where T1,T2 are objects of class Num), we have to overload 
//    << & >> operators.
// 2] To overload this binary operators (<<,>>) we have 2 options - 1) using member fun & 2) using friend/Independent fun
// 3] If we overload it using member function, then left hand side operand always becomes the calling object. But, In case of
//    >> or <<, cin or cout becomes the calling object and they cannot called member functions of our own class. Bcz, cin & cout
//    are objects of class istream & ostream resp. (Note - object of one class cannot called member functions of another class).
//    Hence, we cannot overload << & >> using member function. We have to use Independent/Friend function.
// Note - As copy constructor of class istream & class ostream are private, so pass objects cin or cout by reference only to avoid
//        use of copy constructor.
// Note - For CASCADING, you have to return istream object for cin & ostream object for cout BY REFERENCE only, to avoid use of
//        copy constructor of istream & ostream class as it is private.
// 		  Bcz, if you return object from overloaded function by value, then it gets catch in expression automatically & while storing
//        or assigning, again copy constructor will get called which generates error as copy constructor is private. To avoid this,
//        we have to return by reference only. 
// PLZ REFER TO NOTEBOOK FOR BETTER UNDERSTANDING
//example :-

#include<iostream>
using namespace std;

class Num
{
	public:
		int x,y;
};

istream& operator>>(istream & din, Num & T)
{
	cout<<"\nEnter x & y : ";
	din>>T.x>>T.y;	//OR cin>>T.x>>T.y; is also valid
	return din;		//OR return cin;
}

ostream& operator<<(ostream & dout, Num T)
{
	dout<<"\nx = "<<T.x<<"\ty = "<<T.y;	//OR cout<<T.x<<T.y; is also valid
	return dout;	//OR return cout;
}

int main()
{
	Num T1,T2,T3,T4;
	//cascading is now allowed
	cin>>T1>>T2>>T3>>T4;	
	cout<<T1<<T2<<T3<<T4;
	
	return 0;
}
