// Revision - Class & object
// Q. Complete the following code for given main() function.
//    Add the x of class Num with y of class Digit in class Digit's member function add();

#include<iostream>
using namespace std;

class Num
{
	public:
		int x;
		void scan()
		{
			cout<<"\nEnter the value of x : ";
			cin>>x;
		}
};
class Digit
{
	public:
		int y;
		void scan()
		{
			cout<<"\nEnter the value of y : ";
			cin>>y;
		}
		void add(Num temp)	//OR void add(int a)
		{
			cout<<"\nAddition = "<<y+temp.x;	//cout<<y+a;
		}
};

int main()
{
	Num obj;
	Digit var;
	obj.scan();
	var.scan();
	var.add(obj);	//OR var.add(obj.x);
	return 0;
}
