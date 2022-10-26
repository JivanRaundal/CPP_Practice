
#include<iostream>
using namespace std;

int main()
{
	char mystr[5] = {'R','E','K','H','A'};
	cout<<&mystr[0]<<endl;
	cout<<(long long)&mystr[0]<<endl;
	
	int i;
	for(i=0; i<5; i++)
	{
		cout<<"\nmystr["<<i<<"] : "<<mystr[i];
	}
	return 0;
}
