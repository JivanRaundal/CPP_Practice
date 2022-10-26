// Q 10]. Complete the code so that it will create 2 objects and will print them. Do not change main() function.
//        (first parameter = name, second parameter = age, third parameter = roll no)

#include<iostream>
#include<string.h>
using namespace std;

class Student
{
		const char *name;
		int age;
		int roll;
		
	public:
		Student(const char *name, int age, int roll)	//parameterized constructor
		{
			//strcpy(name,_name);
			this->name = name;
			this->age  = age;
			this->roll = roll;
		}
		~Student()	//destructor
		{
			cout<<"\nName = "<<name<<"\t\tAge = "<<age<<"\tRoll No. = "<<roll;
		}
};

int main()
{
	Student S1("Sachin Tendulkar",22,10);
	Student S2("Vijay Salawe",21,15);
	return 0;
}
