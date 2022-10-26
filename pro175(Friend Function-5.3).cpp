// 						CLASS & OBJECT
// FRIEND FUNCTION:-
// Making Member Function of One Class as a Friend of Another Class:-
// eg -  correct code 3)
// To solve previous errors(pro173 & pro174), we will define scan() function outside the cass using Membership
// Identity Labe after complete definitions of all the classes. 

#include<iostream>
using namespace std;

class Number;

class Digit
{
	private:
		int y;
	public:
		void scan(Number & T);
};

class Number
{
	private:
		int x;
		friend void Digit::scan(Number & T);
};

void Digit::scan(Number & T)
{
	cout<<"\nEnter x : ";
	cin>>T.x;
	cout<<"\nEnter y : ";
	cin>>y;
	
	cout<<"\nx = "<<T.x<<"\ty = "<<y;
}

int main()
{
	Number objn;
	Digit  objd;
	objd.scan(objn);
	return 0;
}
