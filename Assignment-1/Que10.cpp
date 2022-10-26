// 10. scan radius from user. Define only onr function circle() to find area and circumference.
//     print both results in main(). (use pass by address)

#include<iostream>
using namespace std;

void circle(int rad, float *parea, float *pcircm)
{
	*parea = 3.14*rad*rad;
	*pcircm = 2*3.14*rad;
}

int main()
{
	int rad;
	float area, circm;
	
	cout<<"\nEnter radius of circle : ";
	cin>>rad;
	
	circle(rad, &area, &circm);
	
	cout<<"\n\nArea of circle is : "<<area;
	cout<<"\nCircumference of circle is : "<<circm;
	return 0;
}
