//								CLASS AND OBJECT
// Q. Complete the following code.
//    In this que, we are calling add() fun in myfun(). So, add() fun will also work for calling object og myfun().

#include<iostream>
using namespace std;

class Num
{
	private:
		int x,y;
		
		int add()
		{
			int sum;
			sum = x + y;
			return sum;
		}
		
	public:
		void scan()
		{
			cout<<"\nEnter x & y : ";
			cin>>x>>y;
		}
		
		void print()
		{
			cout<<"\nx = "<<x<<"\ty = "<<y<<endl;
		}
		
		int myfun()
		{
			int res;
			res = add();
			return res;
		}
};

int main()
{
	Num T1,T2;
	T1.scan();
	cout<<"\nT1 data : ";
	T1.print();
	
	T2.scan();
	cout<<"\nT2 data : ";
	T2.print();
	
	int ans;
	ans = T1.myfun();
	cout<<"\nAddition of x & y is : "<<ans;
	
	ans = T2.myfun();
	cout<<"\nAddition of x & y is : "<<ans;
	return 0;
}
