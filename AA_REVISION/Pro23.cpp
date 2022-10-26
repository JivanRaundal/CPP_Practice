#include<iostream>
using namespace std;

template<class T>
class Num
{
	public:
		T x;
		
		void set(T a)
		{
			x = a;
		}
		void show();
};

template<class U>
void Num<U>::show()
{
	cout<<"\nx = "<<x;
}

int main()
{
	Num<int> obj;
	obj.set(10);
	obj.show();
	
	Num<float> var;
	var.set(12.4);
	var.show();
	
	return 0;
}
