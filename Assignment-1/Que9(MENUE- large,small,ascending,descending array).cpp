// 9. scan 8 integers from user in an array. write a menue driven program for following options.
//    -find smallest element
//	  -find largest element
//    -sort in ascending order
//    -sort in descending order

#include<iostream>
using namespace std;

int main()
{
	int num[8];
	
	cout<<"\n\nINPUT ARRAY";
	for(int i=0; i<8; i++)
	{
		cout<<"\nEnter value of num["<<i<<"] : ";
		cin>>num[i];
	}
	
	cout<<"\n\nYOUR ARRAY IS : \n";
	for(int i=0; i<8; i++)
	{
		cout<<" "<<num[i];
	}
	
	int ch;
	int max,min,temp,_temp;
	do
	{
		cout<<"\n\n------------------------------";
		cout<<"\n1. find smallest element";
		cout<<"\n2. find largest element";
		cout<<"\n3. sort in ascending order";
		cout<<"\n4. sort in descending order";
		cout<<"\n5. Exit....";
		cout<<"\n------------------------------";
		cout<<"\nEnter your choice : ";
		cin>>ch;
		
		switch(ch)
		{
			case 1:
					min = num[0];
					for(int i=1; i<8; i++)
					{
						if(num[i]<min)
						{
							min = num[i];
						}
					}
					cout<<"\n\nSmallest element in array is : "<<min;
					break;
					
			case 2:
					max = num[0];
					for(int i=1; i<8; i++)
					{
						if(num[i]>max)
						{
							max = num[i];
						}

					}
					cout<<"\n\nLargest element in array is : "<<max;
					break;
						
			case 3:
					//int temp;
					for(int i=0; i<8; i++)
					{
						for(int j=0; j<(8-i)-1; j++)
						{
							if(num[j]>num[j+1])
							{
								temp = num[j];
								num[j] = num[j+1];
								num[j+1] = temp;
							}
						}
					}
					cout<<"\n\nSORTED ARRAY IN ASCENDING ORDER IS : \n";
					for(int i=0; i<8; i++)
					{
						cout<<num[i]<<" ";
					}
					break;
			
			case 4:
					//int _temp;
					for(int i=0; i<8; i++)
					{
						for(int j=0; j<(8-i)-1; j++)
						{
							if(num[j]<num[j+1])
							{
								_temp = num[j];
								num[j] = num[j+1];
								num[j+1] = _temp;
							}
						}
					}
					cout<<"\n\nSORTED ARRAY IN DESCENDING ORDER IS : \n";
					for(int i=0; i<8; i++)
					{
						cout<<num[i]<<" ";
					}
					break;
					
			case 5:
					exit(0);
					
			default:
					cout<<"\nInvalid choice....";
					
		}
	}while(ch!=5);
	return 0;
}
