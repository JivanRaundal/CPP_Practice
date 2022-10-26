// 						CLASS AND OBJECT
// CALLING ONE MEMBER FUNCTION FROM ANOTHER MEMBER FUNCTION
// same as calling one fun from another fun().
// In this case, if show() fun is called in scan() function, then show() function will also work for the 
// calling object of scan().

 #include<iostream>
 using namespace std;
 
 class Num
 {
 	int x,y;
 	public:
 		void scan()
 		{
 			cout<<"\nEnter x & y : ";
			cin>>x>>y;
			
			// accessing show() here
			show();	//show will also work for the calling object of scan().	
		}
		void show()
		{
			cout<<"\nx = "<<x<<"\ty = "<<y;
		}
 };
 
 int main()
 {
 	Num T1,T2;
 	T1.scan();
 	T2.scan();
 	return 0;
 }
