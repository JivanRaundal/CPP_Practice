// Q. WAP to explain this pointer.

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
		
		void print()
		{
			int x = 2;
			int y = 3;
			cout<<"\nx = "<<this->x<<"\ty = "<<this->y;	
		}
};

int main()
{
	Number obj;
	obj.set(10,20);
	obj.print();
	return 0;
}
