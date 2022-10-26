// 		 		CLASS AND OBJECT
// CALLING ONE MEMBER FUNCTION FROM ANOTHER MEMBER FUNCTION
// Q. complete the code for given main() function.

#include<iostream>
using namespace std;

class Num
{
	int x,y;	//private
	void scan()	//private
	{
		cout<<"\nEnter x & y : ";
		cin>>x>>y;
	}
	public:
		void show()
		{
			//accessing scan() here
			scan();	//will work for calling object of show()
			
			cout<<"\nx = "<<x<<"\ty = "<<y;
		}
};

int main()
{
	Num obj;
	//obj.scan();	error, bcz scan() is private
	obj.show();
	return 0;
}
