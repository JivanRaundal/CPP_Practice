// Q 20]. Scan an array of 6 integers from user. Print addition of all elements of array. (Use recursion to perform addn)

#include<iostream>
using namespace std;

int add(int *p,int i)
{
	if(i==5)	//if fun call is add(num,1); then condn - if(i==6) { return *(p+6); } 
	{
		return *(p+5); 
	}
	else
	{
		return *(p+i) + add(p,i+1);
	}
}

int main()
{
	int num[6];
	cout<<"\nInput Array :\n";
	for(int i=0; i<6; i++)
	{
		cout<<"\nElement "<<i<<" : ";
		cin>>num[i];
	}
	
	int ans;
	ans = add(num,0);	//OR add(num,1);
	cout<<"\nAdditon of all elements of array using recursion : "<<ans;
	return 0;
}
