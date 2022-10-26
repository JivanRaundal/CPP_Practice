// Templatized Class
// use of templates => Use same function OR class for different datatypes.

// Templatized Class => To make our class's datamembers work for any datatype, we make class templatized.
// Note => 'template<class T>', this statement can work for it's immediate function OR class only. For different 
//		   function or class, we have to write different template statement.

//eg -Defining member function of templatized class outside the class using 'Templatized Membership Identity Label'.
// Note - for that member function, we have to write seperate template statement OR we have to define seperate template
//		  argument. The name of that argument can be changed, but no. of arguments must be same.

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
		void show();
};

//defining show outside the class using 'Templatized Membership Identity Label'.
template<class T>		//here, name of template argument can be changed, but no. of arguments must be same.
void Num<T>::show()
{
	cout<<"\nx = "<<x;
}

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
