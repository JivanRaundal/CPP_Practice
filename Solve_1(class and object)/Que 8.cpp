// Q 8].


#include<iostream>
using namespace std;

void myfun(int length, int height, int width = 5)
{
	cout<<"\nLength = "<<length;
	cout<<"\tHeight = "<<height;
	cout<<"\tWidth = "<<width;	
}    

int main()
{
	myfun(10, 4);	// 10	4	5
	myfun(9,2);		// 9	2	5
	myfun(21, 8, 7);	//21	8	7
	myfun(6, 3, 6);		// 6	3	6
	return 0;
}
