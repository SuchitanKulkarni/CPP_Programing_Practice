/*

13.
class Student
{
	public:
		char *name;
		int *age;
};
Create a database of 4 students.Print them.
Do not add any member function.Write whole code in main() only.
Scan age from user.Print only name of those students whose age
is same as age given by user.
*/

#include<iostream>
using namespace std;

class Student
{
	public:
		char *name;
		int *age;
		
		Student()
		{
			name = new char[90];
			age = new int[1];
		}
};

int main()
{
	Student std[4];
	int i;
	
	for(i=0;i<4;i++)
	{
		cout<<"Enter the name : "<<endl;
		cin.getline(std[i].name,30);
		
		cout<<"enter the age : "<<endl;
		cin>>*(std[i].age);
		
		cin.ignore(1);
	}
	int j;
	
	for(i=0;i<4;i++)
	{
		for(j=i+1;j<4;j++)
		{
			if(*(std[i].age )== *(std[j].age))
			{
				cout<<std[i].name<<"-> "<<std[j].name;
			}
		}
	}
	
	return 0;
}

