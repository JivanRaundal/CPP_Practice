// Template

// Q. Using templatized function for User-defined datatype - 

#include<iostream>
#include<string.h>
using namespace std;

class Student
{
	char name[30];
	int age;
	
	public:
		Student()
		{
			//name = "Jivan Raundal";	//error ass our string is char type array & not string typr string
			strcpy(name,"Jivan Raundal");
			age = 20;
		}
		
		//overloading << operator. Note - << op overloaded function is friend function only, it can't be member fun
		friend ostream& operator<<(ostream & dout,Student temp);
};

ostream& operator<<(ostream & dout,Student temp)
{
	dout<<"Name = "<<temp.name<<"\t\tAge = "<<temp.age;
	return dout;
}

template<class T>
void print(T x)			//Note = this will work for student object but for cout<<x; (x is object of student)
{						//		 we have to overload <<(insertion) operator
	cout<<"\nIn templatized print() function, x = "<<x;
}

int main()
{
	print(10);
	print(4.5);
	
	string S = "xyz";
	print(S);
	
	Student St;
	print(St);
	
	return 0;
}
