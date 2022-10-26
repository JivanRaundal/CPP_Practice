/*							FUNCTION OVERLODING STEPS/RULES
 NOTE:- While deciding correct function defination compiler follows some steps.
 1] At first compiler tries to find exact match.
 	eg- add(23,5,9);	In this case function (4) matches exactly, so fun(4) will get executed for this function call.
2] When compiler does not find exact match it tries some inbuilt promotions(implicit typecasting) to find match.
	eg- add('A');	For this fun call, there is not exact match, In that case compiler will perform implicit typecasting
	and will match fun(1) with this function call.
3] If compiler does not find match in above two rules, It may provide some demotions to find match.
	eg- add(3.5,6.8,5.7);	For this fun call there is no exact match, In that case compiler will perform demotions
	(implicit typecasting) and will match function(4) with this fun call.
	(But in demotion there is value loss) eg- double(3.5) = int(3)
4] If compiler finds more than one matches, then it generates Ambuiguity Error.
	eg- add(3.7,5.3);	In this case, compiler finds two matches- fun(2) & fun(3) Hence compiler generates Ambuiguity 
	error.
	SOLUTION:- Explicit Typecasting eg- add((int)3.7,(int)5.3);	OR	add((float)3.7,(float));
*/

#include<iostream>
using namespace std;

void add(int x)
{
	cout<<"\n1 int fun = "<<x;	//function 1
}

void add(int x,int y)
{
	cout<<"\n2 int fun = "<<x+y;	//function 2
}

void add(float x,float y)
{
	cout<<"\n2 float fun = "<<x+y;	//function 3
}

void add(int x,int y,int z)
{
	cout<<"\n3 int fun = "<<x+y+z;	//funtion 4
}

int main()
{
	add(23, 5, 9);	//fun 4 will call
	add('A');	//internal typecasting & fun 1 will call 
	add(3.5, 6.8, 5.7);	//demotion & fun 4 will call
	//add(3.7, 5.3);	//Ambuiguity error
	add((int)3.7, (int)5.3);
	add((float)3.7, (float)5.3);	
	
	return 0;
}
