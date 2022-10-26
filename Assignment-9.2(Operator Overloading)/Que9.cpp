// Q 9]. Complete the class difinition for given main() function.
//       Note - copy constructor will create problem here, THINK

#include<iostream>
using namespace std;

class Num
{
		int x,y;
	public:
		Num()		//default constructor
		{
			x = 0;
			y = 0;
		}
		Num(Num & T)	//copy constructor
		{
			x = T.x;
			y = T.y; 
		}
		Num & operator-()	//return by refernce to avoid problem due to copy constructor in cout<<-T1<<-T2;
		{
			Num & T = *this;
			T.x = -x;
			T.y = -y;
			return T;
		}
		Num & operator~()	//return by refernce to avoid problem due to copy constructor in cout<<~T1;
		{
			Num & T = *this;
			T.x = ~x;
			T.y = ~y;
			return T;
		}
		
		friend istream& operator>>(istream & din, Num & T);
		friend ostream& operator<<(ostream & dout, Num T);
};

istream& operator>>(istream & din, Num & T)
{
	cout<<"\nEnter x & y : ";
	din>>T.x>>T.y;
	return din;
}

ostream& operator<<(ostream & dout, Num T)
{
	dout<<"\nx = "<<T.x<<"\ty = "<<T.y;
	return dout;
}

int main()
{
	Num T1,T3;
	Num T2(T1);
	cin>>T1>>T2;
	cout<<-T1<<-T2;		//values of T1 & T2 will also reverse here.
	cout<<~T2;
	return 0;
	
}
