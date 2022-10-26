//				Inheritance
// Note - All the members of parent class gets memory inside the object of child class, Including private members of parent class,
//        But, only the thing is that we cannot access private members in child class.
// Means, memory wise everything gets Inherited, & only private members are not accessible.
// eg-

#include<iostream>
using namespace std;

class parent
{
	private:
		int x;
		int y;
		int z;
};

class child : private parent
{
	
};

int main()
{
	child obj;
	cout<<"\nSize of obj = "<<sizeof(obj);	//12 bytes
	return 0;
}
