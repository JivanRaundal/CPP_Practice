
#include<iostream>
using namespace std;

class Num
{
		int x,y;
	public:
		Num()
		{
			x = 0;
			y = 0;
		}
		Num(Num & T)
		{
			cout<<"\nIn copy const";
			x = T.x;
			y = T.y;
		}
		Num operator+(Num T)
		{
			Num Temp;
			Temp.x = x + T.x;
			Temp.y = y + T.y;
			return Temp;
		}
		Num& operator-()
		{
			Num & T = *this;
			T.x = -x;
			T.y = -y;
			return T;
		}
		friend istream& operator>>(istream & din,Num & T);
		friend ostream& operator<<(ostream & dout,Num T);
};

istream& operator>>(istream & din,Num & T)
{
	cout<<"\nEnter x & y : ";
	din>>T.x>>T.y;
	return din;
}

ostream& operator<<(ostream & dout,Num T)
{
	cout<<"\nx = "<<T.x<<"\ty = "<<T.y;
}

int main()
{
	Num T1,T2,ans;
	Num T3(T1);
	cin>>T1>>T2>>T3;
	//ans = T1+T2+T3;		//here, 2 times copy const gets called :- 1) img_obj = T1+T2; 2) ans = img_obj+T3;
	//cout<<ans;
	cout<<-T1;
	return 0;
}
