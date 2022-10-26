//			CLASS & OBJECT
// FRIEND FUNCTION
// Making Whole Class as a Friend Of Another Class:-	//IMP

#include<iostream>
using namespace std;

class Number;
class Digit
{
	private:
		int y;
		//void print(Number);
	public:
		void scan(Number &);
		void print(Number);
};
class Number
{
	private:
		int x;
		friend class Digit;	//bcz of this statement class Digit becomes friend of class Number But, Class Number is 
		                    //is not friend of class Digit. 
		// All the private members of Number become accessible in all member functions of class Digit.
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
