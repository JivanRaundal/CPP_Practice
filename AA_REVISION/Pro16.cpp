// POLYMORPHISM :-

#include<iostream>
using namespace std;

class Digit
{
	public:
		int x;
		void show()
		{
			x = 10;
			cout<<"\nIn Digit show(), x = "<<x;	
		}	
};

int main()
{
	Digit * ptr = NULL;
	ptr->show();
	return 0;
}
