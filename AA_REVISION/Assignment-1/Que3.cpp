// Q.3]

#include<iostream>
using namespace std;

int Area(int, int);
int Peri(int, int);

int main()
{
	int l,b;
	cout<<"\nEnter length & breadth of rectangle : ";
	cin>>l>>b;
	
	int area = Area(l,b);
	int peri = Peri(l,b);
	
	cout<<"\nArea = "<<area<<"\nPerimeter = "<<peri;
	return 0;
}

int Area(int l,int b)
{
	return l * b;
}

int Peri(int l,int b)
{
	return 2 * (l + b);
}
