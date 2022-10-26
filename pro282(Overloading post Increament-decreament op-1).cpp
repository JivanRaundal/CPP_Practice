// OVERLOADING POST INCREAMENT(++) & POST DECREAMENT(--) :-
// 1] Pre-increament/decreament & post-increament/decreament have different execution.
// 2] Hence, while overloading both must be overloaded with different functions.
// Note - For, post increament(++) we have to mentioned one int parameter in parameter list, it is of no use it's just for
//        compiler to understand difference between pre & post. It's default value is zero.
// example :-

#include<iostream>
using namespace std;

class Num
{
	private:
		int x,y;
	public:
		void operator++()	//pre++
		{
			cout<<"\nPre-Increament overloaded";
			++x;
			++y;
		}
		void operator++(int a)	//post++, int a is just for difference not usable, its value is 0(zero) & passed implicitly by compiler
		{
			cout<<"\nPost-Increament overloaded, a = "<<a;
			x++;
			y++;
		}
		friend istream& operator>>(istream& din,Num & T);
		friend ostream& operator<<(ostream& dout,Num T);
};

istream& operator>>(istream& din,Num & T)
{
	cout<<"\nEnter x & y : ";
	din>>T.x>>T.y;
	return din;
}

ostream& operator<<(ostream& dout,Num T)
{
	dout<<"\nx = "<<T.x<<"\ty = "<<T.y;
	return dout;
}

int main()
{
	Num T;
	cin>>T;
	++T;	//overloaded preincreament fun will be called;
	cout<<"\n++T"<<T;
	T++;	//overloaded postincreament fun be called, and 1 parameter will be passed implicitly with value 0;
	cout<<"\nT++"<<T;
	return 0;
}
