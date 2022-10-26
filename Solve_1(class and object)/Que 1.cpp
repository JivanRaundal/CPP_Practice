// Q 1]. difference between public and private

#include<iostream>
using namespace std;

class Num
{
	private:
		int x;
	public:
		int y;
		void show()	//member function
		{
			x = 5;
			cout<<"\nx = "<<x<<"\ty = "<<y;	//x is accessible in member function
		}
};

int main()	//non-member function
{
	Num T1, T2;
	//T1.x = 10;	error, bcz x is private and not accessible in non-member function
	T1.y = 20;
	//T2.x= 45;		error, x is not accessible
	T2.y = 40;
	T1.show();
	T2.show(); 
	return 0;
}
