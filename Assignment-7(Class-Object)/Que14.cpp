// Q 14] WAP to scan 2 matrices from user. And perform their addition in third matrix.

#include<iostream>
using namespace std;

class Matrix
{
	private:
		int num[3][3];
	
	public:
		void scan()
		{
			cout<<"\n\nEnter Matrix Elements :";
			int i,j;
			for(i=0; i<3; i++)
			{
				for(j=0; j<3; j++)
				{
					cout<<"\nEnter num["<<i<<"]["<<j<<"] : ";
					cin>>num[i][j];
				}
			}
		}
		
		void print()
		{
			cout<<"\n\nMatrix :\n";
			int i,j;
			for(i=0; i<3; i++)
			{
				for(j=0; j<3; j++)
				{
					cout<<" "<<num[i][j];
				}
				cout<<"\n";
			}
		}
		
		void add(Matrix T1,Matrix T2)
		{
			int i,j;
			for(i=0; i<3; i++)
			{
				for(j=0; j<3; j++)
				{
					num[i][j] = T1.num[i][j] + T2.num[i][j];
				}
			}
		}
};

int main()
{
	Matrix M1,M2,M3;
	
	M1.scan();
	M1.print();
	M2.scan();
	M2.print();
	
	M3.add(M1,M2);
	M3.print();
	
	return 0;
}
