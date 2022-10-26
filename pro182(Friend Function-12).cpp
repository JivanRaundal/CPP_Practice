//			CLASS & OBJECT
// FRIEND FUNCTION
// Making Whole Class as a Friend Of Another Class:-	//IMP
// example:-
// Making Both the classes as a friend of one another:-

#include<iostream>
using namespace std;

class Number;
class Digit
{
	private:
		int y;
		void print(Number T);
	public:
		void scan(Number & T);
		friend class Number; //Number becomes friend of Digit & all private members of Digit are now accesible in Number
};
class Number
{
	private:
		int x;
	public:
		void myfun(Digit & D);
		friend class Digit; //Digit becomes friend of Number & all private members of Number are now accesible in Digit
};
void Digit::scan(Number & T)
{
	cout<<"\nEnter x : ";
	cin>>T.x;
	cout<<"\nEnter y : ";
	cin>>y;
	
	//calling print() here bcz it is private & private member-functions can be access only in it's own class's 
	//public member functions
	print(T);	//not need to declare here bcz we have already declared print() in class. So, just call it.
}

void Digit::print(Number T)
{
	cout<<"\nx = "<<T.x<<"\ty = "<<y;
}

void Number::myfun(Digit & D)
{
	cout<<"\n\nIn myfun()";
	cout<<"\nEnter x : ";
	cin>>x;
	cout<<"\nEnter y : ";
	cin>>D.y;
	//printing x & y
	cout<<"\nx = "<<x<<"\ty = "<<D.y;
}
int main()
{
	Number objn;
	Digit  objd;
	
	objd.scan(objn);
	//objd.print(objn);	error bcz print() is private
	objn.myfun(objd);	//member function of class Number
	return 0;
}
