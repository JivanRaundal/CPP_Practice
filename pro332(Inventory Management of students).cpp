//				FILE HANDLING INVENTORY MANAGEMENT

#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;

class Student
{
	public:
		char name[30];
		int roll;
		int age;
		
		void scan()
		{
			//scannind details from console & writing it in file
			cout<<"\nEnter Name : ";
			cin.getline(name,28,'\n');			
			cout<<"\nEnter Age : ";
			cin>>age;
			cout<<"\nEnter Roll : ";
			cin>>roll;
			//cin.ignore(1);
		}
};

int main()
{
fstream fobj("C:\\Users\\Jivan\\OneDrive\\Desktop\\cpp class\\file_handling_txt\\pro332.txt",ios::in|ios::out|ios::trunc);
	if(fobj.fail())
	{
		cout<<"\nCannot Connect";
		exit(1);
	}
	
	Student S;
	int i,ch,n;
	//local variables to read data from file
	char _name[30];
	int _age;
	int _roll;
	
	do
	{
		cout<<"\n\n__________________________";
		cout<<"\n1. Write Data to file.";
		cout<<"\n2. Read data from file.";
		cout<<"\n3. Search with Name.";
		cout<<"\n4. Search with Roll.";
		cout<<"\n5. exit.";
		cout<<"\n__________________________";
		cout<<"\nEnter Your Choice : ";
		cin>>ch;
		
		switch(ch)
		{
			case 1:
				//scannind data from console & writing it in file
				cout<<"\nHow many Students ? ";
				cin>>n;
				for(i=0; i<n; i++)
				{
					cin.ignore(1);
					S.scan();
					fobj<<S.name<<endl;
					fobj<<S.age<<endl;
					fobj<<S.roll<<endl;
				}
				break;
				
			case 2:
				fobj.seekg(0,ios::beg);		//file object is moved to beg
				//reading data from file & printing it on console
				for(i=0; i<n; i++)
				{
					fobj.getline(_name,28,'\n');
					fobj>>_age;
					fobj>>_roll;
					fobj.ignore(1);
				
					cout<<"\nName = "<<_name<<"\t\tAge = "<<_age<<"\tRoll = "<<_roll;
				}
				break;
				
			case 3:
				fobj.seekg(0,ios::beg);		//file object is moved to beg again
				//search with name
				char str[30];
				int flag1;
				flag1 = 0;
				cin.ignore(1);
				cout<<"\nEnter Name to be searched : ";
				cin.getline(str,28,'\n');
				for(i=0; i<n; i++)
				{
					fobj.getline(_name,28,'\n');
					fobj>>_age;
					fobj>>_roll;
					fobj.ignore(1);
					
					if(strcmp(str,_name)==0)
					{
						flag1 = 1;
						cout<<"\nFound";
						cout<<"\nName = "<<_name<<"\t\tAge = "<<_age<<"\tRoll = "<<_roll;
					}
				}
				if(flag1==0)
				{
					cout<<"\nNot Found";
				}
				break;
				
			case 4:
				fobj.seekg(0,ios::beg);		//move file object to beg 
				int r,flag2;
				flag2 = 0;
				cout<<"\nEnter Roll No. to be searched : ";
				cin>>r;
				for(i=0; i<n; i++)
				{
					fobj.getline(_name,28,'\n');
					fobj>>_age;
					fobj>>_roll;
					fobj.ignore(1);
					
					if(r == _roll)
					{
						flag2=1;
						cout<<"\nFound";
						cout<<"\nName = "<<_name<<"\t\tAge = "<<_age<<"\tRoll = "<<_roll;
					}
				}
				if(flag2==0)
				{
					cout<<"\nNot Found";
				}
				break;
				
			case 5:
				exit(0);
				
			default:
				cout<<"\nInvalid Choice!...Plz try again";
		}
	}while(ch!=5);
	
	fobj.close();
	return 0;
}
