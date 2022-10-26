//			INHERITANCE
// # Virtual Classes - (DIAMOND PROBLEM)
//		Grand
//     /     \
//    p1     p2
//    \      /
//     child
// Note - In above eg, If grand class has member function show(), then child class will have 2 copies of grand show()
//        1 from p1 & another from p2. As compiler finds 2 matches for obj.show(); (obj is object of child) 
//        It will generate Ambuiguity Error. It is called DIAMOND PROBLEM in C++.
//  To solve above problem we have 2 solutions :- 1) Use - Membershipe Identity Label
//                                                2) Use - Virtual Classes (using virtual keyword)
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

class parent1 : public Grand
{
	
};

class parent2 : public Grand
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
	// here, we are using Membership Identity Label
	obj.parent1::show();
	obj.parent2::show();
	return 0;
}
