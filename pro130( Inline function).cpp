//				INLINE FUNCTION
// 1] To make fun inline you have to use keyword inline.
// 2] syntax :- inline returntype fun_name();
// 2] If function becomes inline it's function call get's replaced by the code mentioned in it's definition.
//    So that function overhead get's reduced.
// 3] Making function inline is only request to compiler. Compiler will decide whether to make your fun inline or not.
// 4] following are some possibilities where your function may not be inline:-
//    1) If code is too large, it cannot be inline.
//	  2) If code contains loops or switch cases, it may not be inline.
//    3) If function contains return statement, then also it may not be inline.
//    4) If function is recursive, it may not be inline.
//    5) If function contains 'go to' statement, it cannot be inline.
// Note:- This all are possibilities, whether to make function inline or not is decided by compiler's algorithm.
// example:-

#include<iostream>
using namespace std;

inline void show()	//inline function
{
	cout<<"\nIn show()";
	cout<<"\nHello!";
}

int main()
{
	show();
	show();
	show();
	return 0;
}
