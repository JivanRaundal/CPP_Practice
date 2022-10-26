//					CLASS & OBJECT
// ARRAY OF OBJECT:-
//example:-
// Q.

#include<iostream>
using namespace std;

class Number
{
	public:
		int num[5];	//simple array of int
};

//scan & print num array of each object using array of object in main()
int main()
{
	Number obj[4];	//array of objects
	
	int i,j;
	
	//scanning
	//Note - Outerloop is for array of objects & Innerloop is for num[] array.
	for(i=0; i<4; i++)
	{
		cout<<"\nEnter num[] array for "<<i<<"th object : \n";
		for(j=0; j<5; j++)
		{
			cout<<"\nelement "<<j<<" : ";
			cin>>obj[i].num[j];
		}
	}
	
	//printing
	//Note - Outerloop is for array of objects & Innerloop is for num[] array.
	for(i=0; i<4; i++)
	{
		cout<<"\n\nPrinting num[] array of "<<i<<"th object :\n";
		for(j=0; j<5; j++)
		{
			cout<<" "<<obj[i].num[j];
		}
	}
	return 0;
}
