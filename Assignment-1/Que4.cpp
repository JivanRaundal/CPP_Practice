// 4. scan radius of circle in main(). Define functions to find area & circumference of circle.
//	  print both results in main(). (use call by value)

#include<iostream>
using namespace std;

float cir_area(int rad)
{
	return 3.14*rad*rad;
}

float cir_circm(int rad)
{
	return 2*3.14*rad;
}

int main()
{
	int rad;
	float area, circm;
	
	cout<<"\n\nEnter the radius of circle : ";
	cin>>rad;
	
	area = cir_area(rad);
	circm = cir_circm(rad);
	
	cout<<"\n\nArea of circle is : "<<area;
	cout<<"\nCircumferece of circle is : "<<circm;
	return 0;
}
