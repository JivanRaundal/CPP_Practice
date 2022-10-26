//			INHERITANCE
// # Virtual Classes - (DIAMOND PROBLEM)
// Note - No matter how many Inheritance Levels are there, you have to Inherit Grand class virtually only in it's 
//        Immediate children in all the paths towards it's children.
// Diagram-
//		Grand
//     /  |  \
//    p1  |  p2		Here, Grand must be inherited virtually only in Immediate children. i.e. in p1 & p2 only 
//    |   |  |
//    p3  |  p4
//    \   | /
//     child
// eg - 

#include<iostream>
using namespace std;

class Grand
{
	public:
		void show()
		{
			cout<<"\nIn Grand show()";
		}
};

class parent1 : virtual public Grand
{
	
};

class parent2 : virtual public Grand
{
	
};

class parent3 : public parent1	// No use of using virtual keyword here
{
	
};

class parent4 : public parent2	// No use of using virtual keyword here
{
	
};

class child : public parent3, public parent4
{
	
};

int main()
{
	child obj;
	//obj.show();		//Ambuiguity Error
	// Solution - 1) Use Membership Identity Label, 2) Use virtual classes
	//obj.parent1::show();
	//obj.parent2::show();
	obj.show();		//Now, due to virtual keyword only one copy of show() is available in child
	return 0;
}

