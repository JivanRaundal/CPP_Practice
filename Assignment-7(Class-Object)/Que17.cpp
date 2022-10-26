// Q 17] A company has 5 employees. The duty of each employee is to meet shopkeepers in the market and bring business
//       to company. WAP to keep track of each employee so that you will come to know that
//       1) How much business each employee has given to company.
//       2) How many shops have been visited by each employee.
//       3) The employee who has given the maximum business from single shop.
//       4) The employee who has given the minimum business from single shop.

#include<iostream>
using namespace std;

class Employee
{
	private:
		int n;	//n - no. of shopes visited by each employee
		int * business;
		
	public:
		
		void scan()
		{
			cout<<"\n\nHow many shops have been visited ? ";
			cin>>n;
			
			business = new int[n];
			int i;
			cout<<"\nEnter the amount collected from each shop (in Lakhs) : ";
			for(i=0; i<n; i++)
			{
				cout<<"\nShop "<<i+1<<" : ";
				cin>>*(business+i);	
			}	
		}
		
		void print_no_shop()
		{
			cout<<"\nNumber of shops visited = "<<n;	
		}
		
		void total_business_to_company()
		{
			int i, sum = 0;
			for(i=0; i<n; i++)
			{
				sum = sum + *(business+i);
			}
			cout<<"\nTotal Business given to company = "<<sum<<" lakhs.";
		}
		
		int max_business()
		{
			int i,max;
			max = *(business+0);
			for(i=0; i<n; i++)
			{
				if(*(business+i) > max)
				{
					max = *(business+i);
				}
			}
			return max;
		}
		
		int min_business()
		{
			int i,min;
			min = *(business+0);
			for(i=0; i<n; i++)
			{
				if(*(business+i) < min)
				{
					min = *(business+i);
				}
			}
			return min;
		}
		
		void freememory()
		{
			delete[] business;
		}
};

int main()
{
	Employee E[5];	//array of objects;
	int min_max[5];	//normal int array
	
	int i;
	cout<<"\nKeep Track Of Each Employee\n";
	for(i=0; i<5; i++)
	{
		cout<<"\nEnmployee "<<i+1<<" : ";
		E[i].scan();
	}
	
	int ch;
	do
	{
		cout<<"\n\n__________________________________MENUE__________________________________";
		cout<<"\n1. Number of shops visited by each employee.";
		cout<<"\n2. Business given by each employee to company.";
		cout<<"\n3. The employee who has given the maximum business from single shop.";
		cout<<"\n4. The employee who has given the minimum business from single shop.;";
		cout<<"\n5. exit.";
		cout<<"\n_________________________________________________________________________";
		cout<<"\nEnter Your choice : ";
		cin>>ch;
		
		switch(ch)
		{
			case 1:
				cout<<"\n\nNumber of shops visited by each employee :";
				for(i=0; i<5; i++)
				{
					cout<<"\nEmployee "<<i+1<<" : ";
					E[i].print_no_shop();
				}
				break;
				
			case 2:
				cout<<"\n\nTotal Business given by each employee to company :";
				for(i=0; i<5; i++)
				{
					cout<<"\nEnmployee "<<i+1<<" : ";
					E[i].total_business_to_company();
				}
				break;
			
			case 3:
				int max,x;
				for(i=0; i<5; i++)
				{
					min_max[i] = E[i].max_business(); 
				}
				max = min_max[0];
				for(i=0; i<5; i++)
				{
					if(min_max[i] >= max)
					{
						x = i+1;
						max = min_max[i];
					}
				}
				cout<<"\n\nEmployee "<<x<<" has given maximum business of "<<max<<" lakhs from single shop.";
				break;
				
			case 4:
				int min,y;
				for(i=0; i<5; i++)
				{
					min_max[i] = E[i].min_business(); 
				}
				min = min_max[0];
				for(i=0; i<5; i++)
				{
					if(min_max[i] <= min)
					{
						y = i+1;
						min = min_max[i];
					}
				}
				cout<<"\n\nEmployee "<<y<<" has given minimum business of "<<min<<" lakhs from single shop.";
				break;
				
			case 5:
				exit(0);
				
			default:
				cout<<"\nInvalid choice!...Please try again.";
		}
	}while(ch != 5);
	
	//deleting runctime memory
	for(i=0; i<5; i++)
	{
		E[i].freememory();
	}
	return 0;
}
