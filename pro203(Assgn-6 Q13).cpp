//				CLASS & OBJECT
// Assignment-6] Q.13) Important question for logic development
// Q 13] Do not change main() function. You may add your functions in class if you wish.

#include<iostream>
using namespace std;

class Digit
{
		int x,y;
	public:
		
		static Digit scan()	//static member function works for class & to access datamembers inside it use obj & . oper
		{
			Digit temp;			//here object temp is local varable of scan() function & it gets memory during fun call
			cout<<"\nEnter x & y : ";	//So, compiler will get class Digit's definition before calling scan() fun
			cin>>temp.x>>temp.y;		//ans hence, compiler dosen't give error. But if we create object of Digit as
			return temp;				//Digit class's datamember then compiler generates error.
		}
		
		static Digit add(Digit T1,Digit T2)	//static member function works for class
		{
			Digit temp;
			temp.x = T1.x + T2.x;
			temp.y = T1.y + T2.y;
			return temp;
		}

		static void show(Digit T)
		{
			cout<<"\nx = "<<T.x<<"\ty = "<<T.y;
		}
};

Digit scan()	//Independent function
{
	Digit temp;
	temp = Digit::scan();
	return temp;
}

void print(Digit T)	//Independent function
{
	Digit::show(T);
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
