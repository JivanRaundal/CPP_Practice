//	       CLASS AND OBJECT
// Q.complete the code, for given main() function.
// NOTE:- 1 foot = 12 inches

#include<iostream>
using namespace std;

class Distance
{
	int foot, inch;
	void convert()	//convert foot to inches
	{
		int total;
		total = (foot*12) + inch;
		cout<<"\nTotal distance in inch = "<<total<<" inch.";
	}
	void show()	
	{
		cout<<"\nDistance = "<<foot<<" foot & "<<inch<<" inch.";
	}
	public:
		void scan()
		{
			cout<<"\nEnter the distance in foot & inches : ";
			cin>>foot>>inch;
			
			//accessing convert() & show() here. Both will work for calling object of scan()
			show();
			convert();
		}
};

int main()
{
	Distance T1,T2;
	T1.scan();
	T2.scan();
	return 0;	
}
