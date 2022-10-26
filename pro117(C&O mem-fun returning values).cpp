//			CLASS AND OBJECT
// Member functions returning values

#include<iostream>
using namespace std;

class calc
{
	int x, y;
	public:
		void scan()
		{
			cout<<"\nEnter x and y : ";
			cin>>x>>y;
		}
		int add()
		{
			int ans;
			ans = x+y;
			return ans;
		}
		int sub()
		{
			int ans;
			ans = x-y;
			return ans;
		}
};

int main()
{
	calc T;
	T.scan();
	int sum, sub;
	sum = T.add();
	sub = T.sub();
	
	cout<<"\nAddition : "<<sum;
	cout<<"\nSubstraction : "<<sub;
	return 0;
}
