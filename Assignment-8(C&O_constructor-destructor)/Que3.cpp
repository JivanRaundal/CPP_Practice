// Q 3]. WAP to explain this pointer
// Note - this pointer stores the address of calling object automatically.

#include<iostream>
using namespace std;

class Number
{
	public:
		int x,y;
		void set(int x,int y)
		{
			this->x = x;
			this->y = y;
		}
		void show()
		{
			cout<<"\nx = "<<x<<"\ty = "<<y;
		}
};

int main()
{
	Number obj;
	obj.set(10,20);
	obj.show();
	return 0;
}
