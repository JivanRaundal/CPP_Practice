// 

#include<iostream>
using namespace std;

int main()
{
	int yr;
	
	cout<<"\nEnter year : ";
	cin>>yr;
	
	if(yr%400 == 0)			//if multiple of 400 -leap
	{
		cout<<"Leap";
	}
	else if(yr%100 == 0)	//if multiple of 100 -Not leap
	{
		cout<<"Not Leap";
	}
	else if(yr%4 == 0)		//if multiple of 4 -Leap
	{
		cout<<"Leap";
	}
	else					//else -Not leap
	{
		cout<<"Not Leap";
	}
	return 0;
}
