// Q 1]. WAP to explain constructor & destructor for Runtime objects.

#include<iostream>
using namespace std;

class Num
{
	public:
		int x,y;
		Num()
		{
			x = 0;
			y = 0;
			cout<<"\nIn default constructor.";
		}
		Num(int a,int b)
		{
			x = a;
			y = b;
			cout<<"\nIn parameterized constructor.";
		}
		~Num()
		{
			cout<<"\nIn destructor.";
		}
		void show()
		{
			cout<<"\nx = "<<x<<"\ty = "<<y;
		}
};

int main()
{
	Num *p, *ptr;
	p = new Num();	//runtime object, constructor will be calles automatically for runtime object
	{
		Num *q;
		q = new Num(10,20);
		cout<<"\nq : ";
		q->show();
		ptr = q;
		/* Note = destructor will not be called even if q gets out of scope*/
	}
	cout<<"\nptr : ";
	ptr->show();
	/* Note - To call destructor for runtime object we have to destroy that memory using delete*/
	delete ptr;
	cout<<"\np : ";
	p->show();
	delete p;
	return 0;
}
