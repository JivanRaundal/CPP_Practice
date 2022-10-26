/*					DEFAULT ARGUMENTS/PARAMETERS
 RULES:-
 1] All default arguments must be declared on extreme rigth side of parameter list.
    OR All default arguments must be trailing arguments.
	eg - void myfun(int x, int y, int z=5)
		 void myfun(int x, int y=5, int z)	//error
 2] If we have mentioned a default value for any parameter and we have mentioned a value explicitly for default
    parameter at function call then, priority will given to value mentioned at function call and not to default value.
	eg - void myfun(int x, int y, int z=5)
	     myfun(10, 4, 8)	//in fun call priority is given to 8 
 3] If we are going to mentioned prototype of fun then, default value must be mentioned at prototype/declaration
    and not at function defination.
	If you are not mentioning prototype then you have to mention default argument at function defination.
	eg - void myfun(int x, int y, int z=5)	//function prototype
	     void myfun(int x, int y, int z){ ----}	//function defination
*/

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
	//myfun(length, height, width)
	myfun(10, 4);	// 10	4	5
	myfun(9,2);		// 9	2	5
	myfun(21, 8, 7);	//21	8	7
	myfun(6, 3, 6);		// 6	3	6
	return 0;
}
