// Q 4]. 

#include<iostream>
using namespace std;
/* A)T.copy(obj)
class Num
{
	int x, y;
	public:
		void scan()
		{
			cout<<"\nEnter x and y : ";
			cin>>x>>y;
		}
		void copy(Num & var)
		{
			var.x = x;
			var.y = y;
		}
		void show()
		{
			cout<<"\nx = "<<x<<"\ty = "<<y;
		}
};
int main()
{
	Num T,obj;
	T.scan();
	T.show();
	T.copy(obj);
	obj.show();
	return 0;
}
*/

// B) obj.copy(T);
class Num
{
	int x, y;
	public:
		void scan()
		{
			cout<<"\nEnter x and y : ";
			cin>>x>>y;
		}
		void copy(Num var)
		{
			x = var.x;
			y = var.y;
		}
		void show()
		{
			cout<<"\nx = "<<x<<"\ty = "<<y;
		}
};
int main()
{
	Num T,obj;
	T.scan();
	T.show();
	obj.copy(T);
	obj.show();
	return 0;
}
