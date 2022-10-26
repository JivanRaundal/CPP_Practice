// Template
// Q. Templatized Sort function for user defined datatypes.
// Sorting objects.

#include<iostream>
using namespace std;

class Student
{
	private:
		char name[30];
		int age;
	
	public:
		Student()
		{
			//constructor
		}
		void scan()
		{
			cout<<"\nEnter Name : ";
			cin.getline(name,28,'\n');
			cout<<"\nEnter Age  : ";
			cin>>age;
			cin.ignore(1);
		}
		void show()
		{
			cout<<"\n"<<name<<"\t"<<age;
		}

		//overloading > (greater than operator) for sort function to compare objects based on age
		//Note - for obj1 > obj2 => left side operand i.e. obj1 is calling object & right side operand(obj2) is paramtr
		int operator>(Student temp)
		{
			if(age > temp.age)
			{
				return 1;
			}
			return 0;
		}
};

template<class T>
void Sort(T array[],int n)
{
	int i,j;
	T temp;				//default constructor will called for temp if T is of type Student
	for(i=0; i<n; i++)
	{
		for(j=i+1; j<n; j++)
		{
			if(array[i] > array[j])		//for Student type array => array[i].operator>(array[j]); (overloaded > op)
			{
				temp     = array[i];
				array[i] = array[j];
				array[j] = temp;
			}
		}	
	}	
}

int main()
{
	int i;
	
	//sort function sorting primitive datatype array
	int num[5] = {34,56,23,39,55};
	Sort(num,5);
	cout<<"\n\nSorted int type array :\n";
	for(i=0; i<5; i++)
	{
		cout<<" "<<num[i];
	}
	
	//sort function sorting user-defined datatype array
	Student St[4];		//array of objects
	cout<<"\n\nEnter details :\n";
	for(i=0; i<4; i++)
	{
		St[i].scan();
	}
	Sort(St,4);			//calling templatized sort function for array of type Student
	cout<<"\n\nSorted Student type array :\n";
	for(i=0; i<4; i++)
	{
		St[i].show();
	}
	return 0;
}
