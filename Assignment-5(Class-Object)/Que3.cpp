// Q 3]. Following main() fun code copies D1 into D2 using copy function. Class Digit contains x & y.
//       (main() fun is as in que)

#include<iostream>
using namespace std;

class Digit
{
	int x,y;
	public:
		void getdata()
		{
			cout<<"\nEnter x & y : ";
			cin>>x>>y;
		}
		void copy(Digit & D)	//D2 is passed by refernce as changes want to save in D2
		{
			D.x = x;
			D.y = y;
		}
		void show()
		{
			cout<<"x = "<<x<<"\ty = "<<y;
		}
};

int main()
{
	Digit D1,D2;
	D1.getdata();
	D1.copy(D2);	//copies D1 into D2
	cout<<"\nData of D1 = \n";
	D1.show();
	cout<<"\nData of D2 = \n";
	D2.show();
	return 0; 
}
