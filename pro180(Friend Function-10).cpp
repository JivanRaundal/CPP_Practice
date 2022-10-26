//			CLASS & OBJECT
// FRIEND FUNCTION
// Making Whole Class as a Friend Of Another Class:-	//IMP

// Note - 1) We cannot declare private member function of one class as a friend of another class. If we do so, compiler
//        	 generates error.
//        2) In that case, to make private mamber function as a friend of other class, Declare whole class 
//           (containing your private member function) as a friend of that class.
// example:-

#include<iostream>
using namespace std;

class Number
{
	private:
		void show()
		{
			cout<<"\nIn show()";
		}
	public:
		void member()
		{
			//show();	//If we want to call show() then we can call it from it's own class's member function which 
			            //is public: so, we can call show() through member() functon.
		}
};
class Digit
{
	public:
		void print()
		{
			cout<<"\nIn print()";
		}
		//friend void Number::scan();	//error bcz scan() is private in class Number
		friend class Number;
};
int main()
{
	// We only want to check that code successfully compile hoga ki nhi.
	return 0;
}
