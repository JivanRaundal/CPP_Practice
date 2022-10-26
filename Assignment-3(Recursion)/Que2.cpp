// Q 2]. WAP to print numbers from 1 to 10 recursively.
//       for following main() function.
//		 int main()
//       {
//			print(10);
//		 }

#include<iostream>
using namespace std;

void print(int n)
{
	if(n==0)
	{
		return;
	}
	else
	{
		print(n-1);
		cout<<"\n"<<n;
	}
}

int main()
{
	print(10);
	return 0;
}
