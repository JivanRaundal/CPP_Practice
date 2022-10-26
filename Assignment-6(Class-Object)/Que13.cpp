// Q 13] Do not change main() function. You may add your functions in class if you wish.

#include<iostream>
using namespace std;

class Digit
{
		int x,y;
	public:
		
		static Digit scan()	//static member function works for class & to access datamembers inside it use obj & . oper
		{
			Digit temp;
			cout<<"\nEnter x & y : ";
			cin>>temp.x>>temp.y;
			return temp;
		}
		
		static Digit add(Digit T1,Digit T2)	//static member function works for class
		{
			Digit temp;
			temp.x = T1.x + T2.x;
			temp.y = T1.y + T2.y;
			return temp;
		}

		void _scan()	//non-static member function works for object
		{
			cout<<"\nEnter x & y : ";
			cin>>x>>y;
		}
		
		void _print()
		{
			cout<<"\nx = "<<x<<"\ty = "<<y;
		}
};

Digit scan()	//Independent function
{
	Digit temp;
	temp._scan();
	return temp;
}

void print(Digit T)	//Independent function
{
	T._print();
}

int main()
{
	Digit D1,D2,D3;
	D1 = scan();
	D2 = Digit::scan();
	D3 = Digit::add(D1,D2);
	print(D3);
	return 0;
}
