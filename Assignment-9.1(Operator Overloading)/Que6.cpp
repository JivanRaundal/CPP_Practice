// Q 6]. Complete the code for following main() function.

#include<iostream>
using namespace std;

class Distance
{
		int inch,feet;
	public:
		void scan()
		{
			cout<<"\nEnter distance in feet & inch : ";
			cin>>feet>>inch;
		}
		void show()
		{
			cout<<"\nDistance = "<<feet<<" feet & "<<inch<<" inches.";
		}
		Distance operator+(Distance Temp)
		{
			Distance T;
			T.feet = feet + Temp.feet;
			T.inch = inch + Temp.inch;
			return T;
		}
		void operator~()
		{
			feet = feet + inch/12;
			inch = inch % 12;
		}
		friend void scan(Distance & T);
};

void scan(Distance & T)
{
	cout<<"\nEnter distance in feet & inch : ";
	cin>>T.feet>>T.inch;
}

int main()
{
	Distance D1,D2,D3;
	scan(D1);
	D2.scan();
	~D1;
	~D2;
	/* Note :- ~ operator is used here to convert distance in proper format
	           eg - input = 3 feet 27 inch, output = 5 feet 3 inches */
	D3 = D1 + D2;
	~D3;
	D3.show();
	return 0;
}
