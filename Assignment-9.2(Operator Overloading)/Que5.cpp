// Q 5]. Complete the class definition for given main() funtion.
//       Note - ~ operator is used to convert distance in proper output.

#include<iostream>
using namespace std;

class Distance
{
		int km,mtr;
	public:
		Distance()	//default constructor
		{
			cout<<"\nEnter Distance in km & mtr : ";
			cin>>km>>mtr;
		}
		Distance(int a)	//parameterized constructor
		{
			// to avoid scanning of objects inside member functions
			km = a;
			mtr = a;
		}
		Distance operator~()
		{
			Distance T(0);	//we intensionally pass parameter to avoid default destructor
			T.km  = km + mtr/1000;
			T.mtr = mtr%1000;
			return T;
		}
		
		friend ostream& operator<<(ostream & dout, Distance & T);
};

ostream& operator<<(ostream & dout, Distance & T)
{
	dout<<T.km<<" km & "<<T.mtr<<" mtr";
	return dout;
}

int main()
{
	Distance D1,D2;
	D1 = ~D1;
	D2 = ~D2;
	cout<<"\nDistance = "<<D1<<"\nDistance = "<<D2;
	return 0;
}
