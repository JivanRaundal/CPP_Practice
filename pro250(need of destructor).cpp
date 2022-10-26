//						DESTRUCTOR
// NOTE - Q. What is purpose of destructor...?
// example :-


#include<iostream>
using namespace std;

class Stud
{
	public:
		char * name;
		int age;
		
		void scan()
		{
			name = new char[20];
			cout<<"\nEnter name : ";
			cin.getline(name,18,'\n');
			cout<<"\nEnter Age : ";
			cin>>age;
			cin.ignore(1);	
		}
		void show()
		{
			cout<<"\nName = "<<name<<"\tAge = "<<age;
		}
		/*void freememory()
		{
			delete[] name;
		} */
		
		~Stud()	//destructor
		{
			delete[] name;
		}
};

void myfun()
{
	Stud S;
	S.scan();
	S.show();
	//S.freememory();	
	/* Note - If we forget to call S.freememory() here, then the memory on heap will remain occupied & also
			  we cannot access that memory. So, it is useless memory. That is why instead of freememory() fun
			  we can write delete[] name; inside the destructor so that it will be automatically called when
			  object is about to go out of scope. We don't nedd to call it. */
}

int main()
{
	myfun();
	myfun();
	// .
	// .
	// .
	// .
	myfun();
	return 0;
}
