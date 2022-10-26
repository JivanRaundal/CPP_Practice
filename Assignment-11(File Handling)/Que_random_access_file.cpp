// 		FILE HANDLING
// # Random Access file :-
// operations - 1) Read 2) Write 3) Search 4) Update

#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;

class Student
{
	private:
		char name[30];
		int age;
		
	public:
		void getdata()
		{
			cout<<"\nEnter Name : ";
			cin.getline(name,28,'\n');
			cout<<"\nEnter Age  : ";
			cin>>age;
			cin.ignore(1);
		}
		void printdata()
		{
			cout<<"\nName = "<<name<<"\t\tAge = "<<age;
		}
		
		char* Name()	//will return name
		{
			return name;
		}
};

int main()
{
	fstream fobj;
	fobj.open("random_access.txt",ios::in | ios::out | ios::binary | ios::trunc);
	if(fobj.fail())
	{
		cout<<"\nCan't Connect";
		exit(1);
	}
	
	Student S;
	int n,i,ch,flag;
	char str[30];
	char * _name;
	
	do
	{
		cout<<"\n\n_________MENUE_________";
		cout<<"\n1. Write data.";
		cout<<"\n2. Read data.";
		cout<<"\n3. Search by name.";
		cout<<"\n4. Update data.";
		cout<<"\n5. exit";
		cout<<"\n_______________________";
		cout<<"\nEnter your choice : ";
		cin>>ch;
		cin.ignore(1);
		
		switch(ch)
		{
			case 1:
				fobj.seekg(0,ios::end);
				cout<<"\nHow many Students ? ";
				cin>>n;
				cin.ignore(1);
				for(i=0; i<n; i++)
				{
					//cin.ignore(1);
					S.getdata();
					fobj.write((char*)&S,sizeof(S));
				}
				fobj.clear();
				break;
				
			case 2:
				fobj.seekg(0,ios::beg);
				while(fobj.read((char*)&S,sizeof(S)))
				{
					S.printdata();
				}
				fobj.clear();
				break;
				
			case 3:
				fobj.seekg(0,ios::beg);
				flag = 0;
				//cin.ignore(1);
				cout<<"\nEnter name to be searched : ";
				cin.getline(str,28,'\n');
				
				while(fobj.read((char*)&S,sizeof(S)))
				{
					_name = S.Name();
					if(strcmp(str,_name)==0)
					{
						flag = 1;
						cout<<"\nStudent Found";
						S.printdata();
					}
				}
				if(flag==0)
				{
					cout<<"\nStudent Not Found";
				}
				fobj.clear();
				break;
				
			case 4:
				fobj.seekg(0,ios::beg);
				flag = 0;
				//cin.ignore(1);
				cout<<"\nEnter name to be update : ";
				cin.getline(str,28,'\n');
				
				while(fobj.read((char*)&S,sizeof(S)))
				{
					_name = S.Name();
					if(strcmp(str,_name)==0)
					{
						cout<<"\nStudent Found";
						fobj.seekg(-sizeof(S),ios::cur);
						cout<<"\nEnter Details to be replace/update";
						//cin.ignore(1);
						S.getdata();
						fobj.write((char*)&S,sizeof(S));
						cout<<"\nUpdated Successfully";
					}
				}
				fobj.clear();
				break;
				
			case 5:
				exit(0);
				
			default:
				cout<<"\nInvalid Choice!...Plz try again.";
		}
			
	}while(ch != 5);
	
	fobj.close();
	return 0;
}
