//				Inheritance
// Ambuiguity Resolution In Multiple Inheritance Type2 :-
// Theory :- In Multiple Inheritance, If both classes i.e parent1 & parent2 has same member function with same name, (eg-show())
// 			 & it is inherited in child. Then while calling that member function (show()) using object of child compiler will get
//           confused that which class's member function is to be called & will generate Ambuiguity Error. To solve it, we have to 
//           use Membership Identity Label.  i.e obj.parent1::show();

// Note - compiler doesn't think first about access-specifier, If it finds more than one matches for given function call, then
//        it will give Ambuiguity error first & then will think about access-specifier/accessibility.
// eg-

#include<iostream>
using namespace std;

class parent1
{
	public:
		void show()
		{
			cout<<"\nIn parent1 show()";
		}
};

class parent2
{
	public:
		void show()
		{
			cout<<"\nIn parent2 show()";
		}
};

class child : public parent1, public parent2
{
	
};

int main()
{
	child obj;
	//obj.show();	//Ambuiguity Error
	obj.parent1::show();
	obj.parent2::show();
	return 0;
}
