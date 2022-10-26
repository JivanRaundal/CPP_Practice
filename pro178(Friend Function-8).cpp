//			CLASS & OBJECT
// FRIEND FUNCTION
// Making Member Function of One Class as a Friend of Another Class:-

// LOGICAL RULE(Hindi):- jis class ke function friend banane hai, usko pehle define karo & jisme as a friend declare
//                       karne hai, uss class ko baad me define karo & uska forward declaration karo.
// Note - Member Functions should be declared outside the definitions of all classes.

#include<iostream>
using namespace std;

class Number;	//forward declaration
class Digit
{
	private:
		int y;
	public:
		void scan(Number &);
		void print(Number);
};
class Number
{
	private:
		int x;
		friend void Digit::scan(Number &);
		friend void Digit::print(Number);
};
void Digit::scan(Number & T)
{
	cout<<"\nEnter x : ";
	cin>>T.x;
	cout<<"\nEnter y : ";
	cin>>y;
}
void Digit::print(Number T)
{
	cout<<"\nx = "<<T.x<<"\ty = "<<y;
}
int main()
{
	Number objn;
	Digit  objd;
	objd.scan(objn);
	objd.print(objn);
	return 0;
}
