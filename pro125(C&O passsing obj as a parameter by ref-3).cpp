//						CLASS AND OBJECT
// PASSING OBJECT AS A PARAMETER BY REFERENCE
// example:-

#include<iostream>
using namespace std;

class Num
{
	int x, y;
	public:
		void scan(Num & var)	//T is passe by refernce. Means var will refer to memory of T & all changes made in var
		{						//will reflect in T also.
			cout<<"\nEnter x and Y of obj : ";
			cin>>x>>y;	//directly accessible
			
			cout<<"\nEnter x and y of var : ";
			cin>>var.x>>var.y;
		}
		void show()
		{
			cout<<"\nx = "<<x<<"\ty = "<<y;
		}
};

int main()
{
	Num obj,T;
	
	obj.scan(T);	//T is passed as a paramter by refernce
	obj.show();
	T.show();	//now it will not print garbage value
	return 0;
}
