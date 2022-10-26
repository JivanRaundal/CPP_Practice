//						CLASS & OBJECT
// INNER CLASSES / NESTED CLASSES :-
// Note1 - If you want to reach to Inner Class, you have to go through Outer Class.
//        We can have multiple nested classes.
// Note2 - what if we want to define show() function of class Inner outside the class.
//       -> we have 2 options to define show() otsud the Inner class :- 
//  	   1) Outside class Inner But Inside class Outer. - But, we cannot define member fun of one class Inside 
//            another class. So, 1st option is Invalid.
//         2) Outside class Outer. - This option is valid. Let's see about syntax in code - 

#include<iostream>
using namespace std;

class Outer			//outer class
{
	public:
		int x;
		
		class Inner		//Inner class
		{
			public:
				int y;
				void show();	//member function declaration inside class & definition outside the class.
		};
		
		/*
		void Inner::show()	//errro bcz, we cannot define member function of one class in another class.
		{
			cout<<"\nIn Inner show(), y = "<<y;
		}
		*/
		
		Inner var;	//composition
};

void Outer::Inner::show()	//perfectly valid
{
	cout<<"\nIn Inner show(), y = "<<y;
}

int main()
{
	Outer obj;	//object of class Outer
	Outer::Inner Temp;	//object of class Outer
	
	obj.x = 10;
	Temp.y = 20;
	
	cout<<"\nx = "<<obj.x;
	Temp.show();
	
	return 0;
}
