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

class Number;	//forward declaration

class Digit
{
	private:
		int y;
		void print(Number T);
	public:
		void scan(Number & T);
};

class Number
{
	private:
		int x;
		//friend void Digit::scan(Number & T);	//no error bcz scan() is public:
		//friend void Digit::print(Number T);	//error--can't declare print() as a friend bcz it is private
		friend class Digit;	//to make private members as a friend of another class.
		
		/* Note - If we want to call show() then we can call it from it's own class's member function which 
		          is public: so, we can call show() through member() functon.
		*/
};

void Digit::scan(Number & T)
{
	cout<<"\nEnter x : ";
	cin>>T.x;
	cout<<"\nEnter y : ";
	cin>>y;
	
	//calling print() here bcz it is private & private member-functions can be access only in it's own class's 
	//public member functions
	print(T);	//not need to declare here bcz we have already declared print() in class. So, just call it.
}

void Digit::print(Number T)
{
	cout<<"\nx = "<<T.x<<"\ty = "<<y;
}

int main()
{
	Number objn;
	Digit  objd;
	
	objd.scan(objn);
	//objd.print(objn);	error bcz print() is private
	return 0;
}
