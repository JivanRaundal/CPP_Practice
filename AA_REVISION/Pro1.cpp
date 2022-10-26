// print 1 to 10 numbers recursively

#include<iostream>
using namespace std;

void print(int n)
{
	if(n == 11)
	{
		return;
	}
	else
	{
		cout<<n<<endl;
		print(n+1);
	}
}

int main()
{
	cout<<"\nHello\n";
	print(1);
	cout<<"Bye";
	return 0;
}


