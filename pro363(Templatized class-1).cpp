// Templatized Class
// use of templates => Use same function OR class for different datatypes.

// Templatized Class => To make our class's datamembers work for any datatype, we make class templatized.
// eg - 

#include<iostream>
using namespace std;

template<class T>
class Num		//templatized class Num
{
		T x;	//datamember
	public:
		void set(T a)
		{
			x = a;
		}
		void show()
		{
			cout<<"\nx = "<<x;
		}
};

int main()
{
	//Num obj;
	/* Note - above statement gives error, BCZ at compile time, compiler must know the datatype of x to create object.
			  as T is not a datatype it is just substitute of original datatype. Hence, we have to explicitly mention
			  type of template argument T while creating object. Datatype is mentioned in angular brackets <type>
			  between class name and object name.
	*/
	
	Num <int>obj;		//Note => STL(standard template library) is based on this concept only.
	obj.set(10);
	obj.show();
	
	Num <float>var;
	var.set(9.273);
	var.show();
	
	Num <string>str;
	str.set("HELLO");
	str.show();
	
	//Note - templatized class can also work for User-defined type
	return 0;
}
