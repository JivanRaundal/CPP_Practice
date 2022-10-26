//				DESTRUCTOR
// NOTE - Q. What if we explicitly called destructor using object name & .(dot) operator..?? What consequences (problems)
//           we have to face...??
/*Note - In this code their will be 2 runtime errors - 
		 1) As we have explicitly call destructor at line-43 to destroy runtime memory of object S name.
		   So, the 2nd S.show() at line-44 will print Name = GARBAGE. (because the runtime memory is freed by destruc)
		 2) As destructor get's called automatically for each object when object is about to go out of scope,
		    destructor will called 2nd time automatically for object S, & will try to delete object S runtime
		    memory for name. But that memory is freed already when we called destructor explicitly. Hence the error
		    RETURN VALUE OTHER THAN 0(zero) or PROGRAM STOPPED WORKING.
*/
#include<iostream>
using namespace std;

class Stud
{
		char * name;
		int age;
	public:
		Stud()	//constructor
		{
			name = new char[20];
			cout<<"\nEnter Name : ";
			cin.getline(name,18,'\n');
			cout<<"\nEnter Age : ";
			cin>>age;
			cin.ignore(1);
		}
		~Stud()	//destructor
		{
			delete[] name;
		}
		void show()
		{
			cout<<"\nName = "<<name<<"\tAge = "<<age;
		}
};

int main()
{
	Stud S;
	S.show();
	S.~Stud();	//calling destructor explicitly
	S.show();	//Name = garbage	Age = 20(given age)
	cout<<"\nHEllO";
	return 0;
}
