// 						CLASS & OBJECT
// FRIEND FUNCTION:-
// Making Member Function of One Class as a Friend of Another Class:-
// eg -  error code 1)

#include<iostream>
using namespace std;

class Digit;	//due to forward declaration compiler only comes to know that Digit is a datatype/class. But Compiler
				//doesn't know what are the members of class Digit. eg - scan()
class Number
{
	private:
		int x;
		friend void Digit::scan(Number & T);	//error line ------(1)
};

class Digit
{
	private:
		int y;
	public:
		void scan(Number & T)
		{
			cout<<"\nEnter x : ";
			cin>>T.x;
			cout<<"\nEnter y : ";
			cin>>y;
			
			cout<<"\nx = "<<T.x<<"\ty = "<<y;
		}
};

int main()
{
	Number objn;
	Digit  objd;
	objd.scan(objn);
	return 0;
}

// Note - In above example statement (1) generates error. Bcz, compiler does not know that class Digit contains 
//        a member function scan(). Hence, the error [invalid use of incomplete type 'class Digit'] occurs.
