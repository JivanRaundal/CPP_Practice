//					CLASS & OBJECT
// FRIEND FUNCTION:-
// 1] To declare a function as a friend of class, you have to use friend keyword.
// 2] To make a function as a friend of class, you have to declare that function inside the class using friend keyword.
// 3] When we want to access private members of more than one classes in one function, we have to use friend concept.
// 4] When we make any function as a friend of class, all the members of that class (private/protected/public) becomes
//    accessible in friend function.
// 5] Friend function of the class is not the member function of the class. Hence you cannot call friend function
//    of class using object of that class.
// 6] To access members of class in it's friend function, you have to use object & .(dot) operator.
// 7] Declaration of a function as a friend inside the class can be done under any access-specifier without change in
//    it's concept of friend function.
// 8] Always define friend function outside the class & after definition of all classes.
// example:-

#include<iostream>
using namespace std;

class Number
{
	private:
		int x;	//private 
		friend void scan(Number & T);	//friend function must be declared inside the class using friend keyword.
		friend void print(Number T);
};

void scan(Number & T)	//by reference
{
	cout<<"\nEnter x : ";	//datamembers of the class are not directly accessible inside the friend function,
	cin>>T.x;				// we have to use object & .(dot) operator.
}

void print(Number T)
{
	cout<<"\nx = "<<T.x;
}

int main()
{
	Number obj;
	scan(obj);
	print(obj);
	return 0;
}
