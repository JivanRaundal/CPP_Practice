// 		 		CLASS AND OBJECT
// CALLING ONE MEMBER FUNCTION FROM ANOTHER MEMBER FUNCTION
// example:-

#include<iostream>
using namespace std;

class Num
{
	int x,y;
	public:
		void scan()
		{
			Num temp;	//local for scan()
			cout<<"\nEnter x & y for T1 : ";
			cin>>x>>y;
			
			cout<<"\nEnter x & y for temp : ";
			cin>>temp.x>>temp.y;
			
			//accessing show() here
			show();	//will work for calling object T1
			temp.show();	//will work for local object temp
		}
		void show()
		{
			cout<<"\nx = "<<x<<"\ty = "<<y;
		}
};

int main()
{
	Num T1;
	T1.scan();
	return 0;
}

