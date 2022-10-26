// Q 7].

#include<iostream>
using namespace std;

void add(int x,int y,int z)
{
	cout<<"\n3 int addition = "<<x+y+z;
}
void add(double x,double y,double z)
{
	cout<<"\n3 double addition = "<<x+y+z;	
}
void add(int x,int y)
{
	cout<<"\n2 int addition = "<<x+y;
}
void add(float x,float y)
{
	cout<<"\n2 float addition = "<<x+y;
}

int main()
{
	add(3, 6, 7);
	add(4.765, 8.345, 7.7);
	add(10, 20);
	add((float)2.5, (float)4.5);
	return 0;
}
