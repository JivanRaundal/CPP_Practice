//						CONSTRUCTOR
// Note - Always define your constructor under public access-specifier. So that we can create object of our class
//        anywhere in the code. But, defining constructor under private or protected is not a syntactical error.
//        But, we cannot create object's (which need private constructor) in Non-member / Independent Functions.
// example:-

#include<iostream>
using namespace std;

class Num
{
	private:
		Num()	//default constructor under private access-specifier
		{
			cout<<"\nIn default constructor.";
		}
		
	public:
		int x,y;
		void show()
		{
			Num Temp;	//No error, we can create object which need default constructor inside class's member function.
			Temp.x = 10;
			Temp.y = 20;
		}
};

int main()
{
	// But, we cannot create object which requires default constructor in independent function like main().
	// Num obj;	//Error
	return 0;
}
