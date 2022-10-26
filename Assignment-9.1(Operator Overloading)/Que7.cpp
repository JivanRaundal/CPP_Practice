// Q 7]. Complete the code for following main() function.

#include<iostream>
using namespace std;

class Distance
{
		int km,mtr;
	public:
		void show()
		{
			cout<<"\nDistance = "<<km<<" km & "<<mtr<<" mtr.";
		}
		
		int operator>(Distance Temp)
		{
			if(km > Temp.km)
			{
				return 1;
			}
			else if(km < Temp.km)
			{;
				return 0;
			}
			else
			{
				if(mtr > Temp.mtr)
				{
					return 1;
				}
				else if(mtr < Temp.mtr)
				{
					return 0;
				}
				else
				{
					return 1;	// OR return 0;
				}
			}
		}
		
		bool operator<(Distance Temp)
		{
			if(km > Temp.km)
			{
				return 0;
			}
			else if(km < Temp.km)
			{
				return 1;
			}
			else
			{
				if(mtr > Temp.mtr)
				{;
					return 0;
				}
				else if(mtr < Temp.mtr)
				{
					return 1;
				}
				else
				{
					return 1;	// OR return 0;
				}
			}
		}
		
		friend void scan(Distance & T);
};

void scan(Distance & T)
{
	cout<<"\nEnter distance in km & mtr : ";
	cin>>T.km>>T.mtr;
}

int main()
{
	Distance D1,D2,D3,D4;
	scan(D1);
	scan(D2);
	scan(D3);
	D4 = D1>D2?D1:D2;
	D4 = D4<D3?D3:D4;
	D4.show();
	return 0;
}
