// simple calculator to perform multiplication, addition, division & substraction of the two integer
// numbers using class.

#include<iostream>
using namespace std;

class calculator
{
	float a,b;
	
public:
	calculator()
	{
		a=0;
		b=0;
	}
	
	void input();
	void add();
	void sub();
	void mul();
	void div();
};

void calculator::input()
{
	cout<<"\nEnter the first number: ";
	cin>>a;
	cout<<"\nEnter the second number: ";
	cin>>b;
}

void calculator::add()
{
	float x;
	x=a+b;
	cout<<"\nAddition is: "<<x;
}

void calculator::sub()
{
	float x;
	x=a-b;
	cout<<"\nSubstraction is: "<<x;
}

void calculator::mul()
{
	float x;
	x=a*b;
	cout<<"\nMultiplication is: "<<x;
}

void calculator::div()
{
	float x;
	int ch1;
	
	cout<<"\n\n________________________________";
	cout<<"\n1. Divide first number by second";
	cout<<"\n2. Divide second number by first";
	cout<<"\n________________________________";
	cout<<"\nEnter your choice: ";
	cin>>ch1;
	
	if(ch1==1)
		x=a/b;
	else
		x=b/a;
	cout<<"\nDivision is: "<<x;
}

int main()
{
	calculator c;
	//c.input();
	//c.add();
	//c.sub();
	//c.mul();
	//c.div();
	
	int ch;
	do
	{
		cout<<"\n\n__________OPTION__________";
		cout<<"\n1. Input two numbers";
		cout<<"\n2. Addition";
		cout<<"\n3. Substraction";
		cout<<"\n4. Multiplication";
		cout<<"\n5. Division";
		cout<<"\n6. Exit";
		cout<<"\n__________________________";
		cout<<"\nEnter your choice: ";
		cin>>ch;
		
		switch(ch)
		{
			case 1:
				c.input();
				break;
				
			case 2:
				c.add();
				break;
				
			case 3:
				c.sub();
				break;
				
			case 4:
				c.mul();
				break;
				
			case 5:
				c.div();
				break;
				
			case 6:
				exit(0);
				
			default:
				cout<<"\nInvalid Choice!!!";
		}
	}while(ch!=6);
	
	return 0;
}
