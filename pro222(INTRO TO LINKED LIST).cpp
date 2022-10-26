// 					CLASS & OBJECT
//	INTRODUCTION TO LINKED LIST :-
/* Note - class Number
		  {	public:
		  		int x;
		  		//Number obj;	//error
		  		Number * ptr;	//perfectly valid
		  };
	Reason - No matter what datatype is pointer always stores address & requires 4/8 bytes. i.e. Fixed memory
*/

// Q. creating basic linked list on stack, Actually we have to create linkes list on Heap at runctime, But for
//    introduction we are creating on stack.

#include<iostream>
using namespace std;

class Node
{
	public:
		int data;
		Node * next;	//pointer to object of type Node	
};

int main()
{
	Node T1,T2,T3;	//creating 3 nodes
	
	T1.data = 10;
	T2.data = 20;
	T3.data = 30;
	
	//connecting nodes 
	T1.next = &T2;
	T2.next = &T3;
	T3.next = NULL;
	
	//printing data of each node using first node only
	cout<<"\nLinked List :";
	cout<<"\nT1.data = "<<T1.data;
	cout<<"\nT2.data = "<<T1.next->data;	//OR cout<<T2.data;
	cout<<"\nT3.data = "<<T1.next->next->data;	//OR cout<<T3.data;
	return 0;	
}		  		
