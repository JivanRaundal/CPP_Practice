// Q 12] For given class & main() function, complete the following code. (Do not change main() function)

#include<iostream>
using namespace std;

class Digit
{
	public:
		int x,y;
		
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
};

Digit scan()	//Independent function
{
	Digit temp;
	cout<<"\nEnter x & y : ";
	cin>>temp.x>>temp.y;
	return temp;
}

void print(Digit T)	//Independent function
{
	cout<<"\nx = "<<T.x<<"\ty = "<<T.y;
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
