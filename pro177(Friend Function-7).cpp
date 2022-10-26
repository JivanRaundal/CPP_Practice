//			CLASS & OBJECT
// FRIEND FUNCTION
// Making Member Function of One Class as a Friend of Another Class:-

// LOGICAL RULE(Hindi):- jis class ke function friend banane hai, usko pehle define karo & jisme as a friend declare
//                       karne hai, uss class ko baad me define karo & uska forward declaration karo.
// Note - Member Functions should be declared outside the definitions of all classes.

#include<iostream>
using namespace std;

class Person;
class Student
{
	private:
		int roll;
	public:
		void scan(Person &);
		void print(Person);
};
class Person
{
	private:
		int age;
		friend void Student::scan(Person &);
		friend void Student::print(Person);
};
void Student::scan(Person & T)
{
	cout<<"\nEnter roll number : ";
	cin>>roll;
	cout<<"\nEnter age : ";
	cin>>T.age;
}
void Student::print(Person T)
{
	cout<<"\nRoll number : "<<roll;
	cout<<"\nAge : "<<T.age;
}
int main()
{
	Student st;
	Person per;
	
	st.scan(per);
	st.print(per);
	return 0;
}
