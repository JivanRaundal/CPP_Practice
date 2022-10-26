
#include<iostream>
using namespace std;

class Num
{
	public:
		int x;
		Num(int a)
		{
			cout<<"\nIn para const";
			x = a;
		}
		Num(Num & T) 
		{
			cout<<"\nIn copy const";
			x = 0;
		}
		void show()
		{
			cout<<"\nx = "<<x;
		}
};

int main()
{
	//Num(2).show();
	Num obj = Num(2);	//No copy constructor will get called here
	obj.show();
	//Num Temp(obj);
	return 0;
}
