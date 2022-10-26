// Q 13] WAP to scan 2 matrices from user. And perform their addition in third matrix.

#include<iostream>
using namespace std;

class Matrix
{
	public:
		int num[3][3];
};

int main()
{
	Matrix M1,M2,M3;
	
	int i,j;
	//scanning M1.
	cout<<"\n\nEnter Matrix Elements for M1 :";
	for(i=0; i<3; i++)
	{
		for(j=0; j<3; j++)
		{
			cout<<"\nEnter num["<<i<<"]["<<j<<"] : ";
			cin>>M1.num[i][j];
		}
	}
	
	//scanning M2.
	cout<<"\n\nEnter Matrix Elements for M2 :";
	for(i=0; i<3; i++)
	{
		for(j=0; j<3; j++)
		{
			cout<<"\nEnter num["<<i<<"]["<<j<<"] : ";
			cin>>M2.num[i][j];
		}
	}
	
	//printing M1.
	cout<<"\n\nM1 Matrix :\n";
	for(i=0; i<3; i++)
	{
		for(j=0; j<3; j++)
		{
			cout<<" "<<M1.num[i][j];
		}
		cout<<"\n";
	}
	
	//printing M2.
	cout<<"\n\nM2 Matrix :\n";
	for(i=0; i<3; i++)
	{
		for(j=0; j<3; j++)
		{
			cout<<" "<<M2.num[i][j];
		}
		cout<<"\n";
	}
	
	//additing M1 & M2 in M3.
	for(i=0; i<3; i++)
	{
		for(j=0; j<3; j++)
		{
			M3.num[i][j] = M1.num[i][j] + M2.num[i][j];
		}
	}
	
	//printing M3.
	cout<<"\n\nM3 Matrix :\n";
	for(i=0; i<3; i++)
	{
		for(j=0; j<3; j++)
		{
			cout<<" "<<M3.num[i][j];
		}
		cout<<"\n";
	}
		
	return 0;
}
