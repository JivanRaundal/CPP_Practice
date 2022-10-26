// Q 9] create an array of n integers. Keep asking user to perform one of the following operations until user wants to 
//      stop.  1)sort in ascending order.
//			   2)sort in descending order.
//             3)scan a number & remove it from array.
//      (Use switch case)

#include<iostream>
using namespace std;

int main()
{
	int n;
	cout<<"\nHow many integers you want ? ";
	cin>>n;
	
	int *p;
	p = new int[n];
	
	cout<<"\nInput Array\n";
	int i,j;
	for(i=0; i<n; i++)
	{
		cout<<"\nelement "<<i<<" : ";
		cin>>*(p+i);
	}
	
	cout<<"\n\nArray :\n";
	for(i=0; i<n; i++)
	{
		cout<<" "<<*(p+i);
	}
	
	int temp;
	int ch;
	
	do
	{
		cout<<"\n\n____________________MENUE____________________";
		cout<<"\n1. sort in ascending order.";
		cout<<"\n2. sort in descending order.";
		cout<<"\n3. scan a number & remove it from array.";
		cout<<"\n4. exit.";
		cout<<"\n_____________________________________________";
		cout<<"\nWhich operation do you want to perform on array ? ";
		cin>>ch;
		
		switch(ch)
		{
			case 1:
				for(i=0; i<n; i++)
				{
					for(j=i+1; j<n; j++)
					{
						if(*(p+i) > *(p+j))
						{
							temp = *(p+i);
							*(p+i) = *(p+j);
							*(p+j) = temp;
						}
					}
				}
				cout<<"\nsorted array in ascending order is :\n";
				for(i=0; i<n; i++)
				{
					cout<<" "<<*(p+i);
				}
				break;
			
			case 2:
				for(i=0; i<n; i++)
				{
					for(j=i+1; j<n; j++)
					{
						if(*(p+i) < *(p+j))
						{
							temp = *(p+i);
							*(p+i) = *(p+j);
							*(p+j) = temp;
						}
					}
				}
				cout<<"\nsorted array in descending order is :\n";
				for(i=0; i<n; i++)
				{
					cout<<" "<<*(p+i);
				}
				break;
				
			case 3:
				int x;
				cout<<"\nEnter the number you wand to delete from array : ";
				cin>>x;
				
				for(i=0; i<n; i++)
				{
					if(x == *(p+i))
					{
						for(j=i; j<n-1; j++)
						{
							*(p+j) = *(p+(j+1));
						}
						*(p+j) = 0;
						n--; //if element is found then it will be deleted and each time size of array will be reduced by 1
						i--; //if x is continues in array(eg- 3,3) then due to shifting 2nd x(3) may miss to compare, so i--
					}
				}
				cout<<"\nArray After deleting "<<x<<" is :\n";
				for(i=0; i<n; i++)
				{
					cout<<" "<<*(p+i);
				}
				break;
				
			case 4:
				exit(0);
				
			default:
				cout<<"\nInvalid choice!.. Please try again.";								
		}
	}while(ch!=4);
	
	//deleting runtime memory
	delete[] p;
	return 0;
}
