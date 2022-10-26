// Q 12].

#include<iostream>
using namespace std;

class Book
{
	public:
		char auth[30];
		int  price;
		int  pages;
		
		void scan()
		{
			cout<<"\nEnter Author Name : ";
			cin.getline(auth,28,'\n');
			cout<<"\nEnter price of book : ";
			cin>>price;
			cout<<"\nEnter pages of book : ";
			cin>>pages;
			cin.ignore(1);
		}
		void print()
		{
			cout<<"\nAuthor = "<<auth<<"\t\tPrice = "<<price<<" INR\t\tPages = "<<pages;
		}
};

int main()
{
	Book B[5];	//array of objects
	int i;
	
	cout<<"\nEnter Books details\n";
	for(i=0; i<5; i++)
	{
		cout<<"\nBook "<<i+1<<" : ";
		B[i].scan();
	}
	
	char c;
	int _price;
	int _pages;
	int ch;
	
	do
	{
		cout<<"\n\n_________________________PRINT BOOKS DETAILS_________________________";
		cout<<"\n1. Books whose author name starts with given character.";
		cout<<"\n2. Books whose price is less than or equal to given price.";
		cout<<"\n3. Books which has less than or equal number of pages than given.";
		cout<<"\n4. exit.";
		cout<<"\n_____________________________________________________________________";
		cout<<"\nEnter Your Choice : ";
		cin>>ch;
		
		switch(ch)
		{
			case 1:
				cout<<"\nEnter the character : ";
				cin>>c;
				cout<<"\nBooks whose author name starts with "<<c<<" character are : ";
				for(i=0; i<5; i++)
				{
					if(B[i].auth[0] == c)
					{
						B[i].print();
					}
				}
				break;
				
			case 2:
				cout<<"\nEnter price : ";
				cin>>_price;
				cout<<"\nBooks whose price is less than or equal to "<<_price<<" INR are : ";
				for(i=0; i<5; i++)
				{
					if(B[i].price <= _price)
					{
						B[i].print();
					}
				}
				break;
				
			case 3:
				cout<<"\nEnter number of Pages : ";
				cin>>_pages;
				cout<<"\nBooks which has pages less than or equal to "<<_pages<<" pages are : ";
				for(i=0; i<5; i++)
				{
					if(B[i].pages <= _pages)
					{
						B[i].print();
					}
				}
				break;
				
			case 4:
				exit(0);
				
			default:
				cout<<"\nInvalid choice!...Plz try again.";
		}
	}while(ch != 4);
	
	return 0;
}
