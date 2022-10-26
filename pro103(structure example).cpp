// Structures in C example
// Only variables can be declared inside the structure. we can't declare functions inside structure.

#include<iostream>
using namespace std;

struct Number
{
	int x;
	float y;
	char z;
};

int main()
{
	struct Number n1, n2;
	n1.x = 10;
	n1.y = 5.5;
	n1.z = 'A';
	
	n2.x = 20;
	n2.y = 8.5;
	n2.z = 'a';
	
	cout<<"\nn1.x = "<<n1.x<<"\tn1.y = "<<n1.y<<"\tn1.z = "<<n1.z;
	cout<<"\nn2.x = "<<n2.x<<"\tn2.y = "<<n2.y<<"\tn2.z = "<<n2.z;
	return 0;
}
