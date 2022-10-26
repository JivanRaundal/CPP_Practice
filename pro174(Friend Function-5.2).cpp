// 						CLASS & OBJECT
// FRIEND FUNCTION:-
// Making Member Function of One Class as a Friend of Another Class:-
// eg -  error code 2)
// To solve previous error(pro173), if we define class Digit before class Number then the code will be as follows 
// & will generate another error.

#include<iostream>
using namespace std;

class Number;

class Digit
{
	private:
		int y;
	public:
		void scan(Number & T)
		{
			cout<<"\nEnter x : ";
			cin>>T.x;				// error line -------(1)
			cout<<"\nEnter y : ";
			cin>>y;
			
			cout<<"\nx = "<<T.x<<"\t\y = "<<y;	//error line ------(2)
		}
};

class Number
{
	private:
		int x;
		friend void Digit::scan(Number & T);
};

int main()
{
	Number objn;
	Digit  objd;
	objd.scan(objn);
	return 0;
}

// Note - In above code, statement (1) & (2) generates error. Bcz, compiler does not know that class Number has a
//        datamember named 'x'. Hence, the error [invalid use of incomplete type 'class Number'] occurs.
