// Q 15] Create a database of 5 books. sort your list of books by name & by author.


#include<iostream>
#include<string.h>
using namespace std;

class Book
{
	public:
		char *name;
		char *author;
		int   price;
		
		void scan()
		{
			name   = new char[20];
			author = new char[20];
			
			cout<<"\n\nEnter Name of Book : ";
			cin.getline(name,18,'\n');
			cout<<"\nEnter Name of Author : ";
			cin.getline(author,18,'\n');
			cout<<"\nEnter Price : ";
			cin>>price;
			cin.ignore(1);
		}
		
		void print()
		{
			cout<<"\n\nBook Name   : "<<name;
			cout<<"\nAuthor name : "<<author;
			cout<<"\nPrice       : "<<price;
		}
		
		void freememory()
		{
			delete[] name;
			delete[] author;
		}
};

int main()
{
	Book B[5];	//array of objects
	
	cout<<"\nEnter details\n";
	int i,j;
	for(i=0; i<5; i++)
	{
		B[i].scan();
	}
	
	cout<<"\n\nBooks List :\n";
	for(i=0; i<5; i++)
	{
		B[i].print();
	}
	
	int ch;
	Book temp;
	int x;
	do
	{
		cout<<"\n\n___________MENUE___________";
		cout<<"\n1. sort by book name.";
		cout<<"\n2. sort by book author.";
		cout<<"\n3. exit.";
		cout<<"\n___________________________";
		cout<<"\nEnter your choice : ";
		cin>>ch;
		
		switch(ch)
		{
			case 1:
				for(i=0; i<5; i++)
				{
					for(j=i+1; j<5; j++)
					{
						x = strcmp(B[i].name, B[j].name);
						if(x==1)
						{
							temp = B[i];
							B[i] = B[j];
							B[j] = temp;
						}
					}
				}
				cout<<"\nAfter sorting based on Book name :\n";
				for(i=0; i<5; i++)
				{
					B[i].print();
				}
				break;
				
			case 2:
				for(i=0; i<5; i++)
				{
					for(j=i+1; j<5; j++)
					{
						x = strcmp(B[i].author, B[j].author);
						if(x==1)
						{
							temp = B[i];
							B[i] = B[j];
							B[j] = temp;
						}
					}
				}
				cout<<"\nAfter sorting based on Author's name :\n";
				for(i=0; i<5; i++)
				{
					B[i].print();
				}
				break;
				
			case 3:
				exit(0);
				
			default:
				cout<<"\nInvalid Choice!...Please try again.";
		}
	}while(ch != 3);
	
	//deleting runtime memory
	for(i=0; i<5; i++)
	{
		B[i].freememory();
	}
	return 0;
}
