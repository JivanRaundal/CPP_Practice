// Q.11]

#include<iostream>
using namespace std;

void Rectangle(int l,int b,int & area,int & peri)
{
	area = l * b;
	peri = 2 * (l + b);
}

int main()
{
	int l,b;
	cout<<"\nEnter length & breadth : ";
	cin>>l>>b;
	
	int area,peri;
	Rectangle(l,b,area,peri);		//pass by reference
	
	cout<<"\nArea = "<<area<<"\nPerimeter = "<<peri;
	return 0;
}
