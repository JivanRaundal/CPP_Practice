 //				DESTRUCTOR
 //1] We can define destructor outside the class using Membership Identity Label.
 //2] Destructor of one class can be friend of another class.
 // example :-
 
 #include<iostream>
 using namespace std;
 
 class Num
 {
 	public:
 		Num()
 		{
 			cout<<"\nNum object created";
		}
		~Num();	//declaration inside the class
 };
 
 class Digit
 {
 	private:
 		int x;
 		Digit()
 		{
 			cout<<"\nDigit object created";	
		}
		~Digit()
		{
			cout<<"\nDigit object destroyed";
		}
		friend Num::~Num();	//making destructor of class Num as a friend of class Digit
 };
 
 Num::~Num()	//defining destructor of class Num outside the class
 {
 	Digit obj;	//object of Digit class
 	obj.x = 10;
	cout<<"\nDigit class's x = "<<obj.x;
	cout<<"\nNum object destoyed";
 }
 
 int main()
 {
 	Num var;
 	return 0;
 }
