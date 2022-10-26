//			INHERITANCE
// # Virtual Classes - (DIAMOND PROBLEM)
//		Grand
//     /     \
//    p1     p2
//    \      /
//     child
// #Solution Using Virtual Classes :-
// 1] The problem created in above diagram is called 'Diamond Problem'.
// 2] To solve this problem, we used Membership Identity Label. But, cpp has provided us one more solution. 
//    i.e virtual classes.
// 3] Here, cpp says that if multiple copies of members of Grand class are getting created in child class due to 
//    Multiple paths of Inheritance, then you can avoid this multiple copies in child class by Inheriting Grand 
//    class virtually in it's Immediate children in every path towards child.
//        Grand
//       /  |  \
//      p1  |  p2
//      \   |  /
//       child
// Note - Access-specifiers & virtual keywords can be mentioned in any sequence
//        1) virtual public Grand  OR
//        2) public virtual Grand
// eg-

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

class parent1 : virtual public Grand	//OR public virtual Grand;
{
	
};

class parent2 : virtual public Grand	//OR public virtual Grand;
{
	
};

class child : public parent1, public parent2
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
