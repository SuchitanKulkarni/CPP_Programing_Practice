/*
11.
class Student
{
	private:
		char name[30];
		int age;
};
Create a database of 4 students.Print them.
Scan a name from user.Search student having this name in database.
*/

#include<iostream>
#include<string.h>
using namespace std;

class Student
{
	private:
		char name[30];
		int age;
		
		public:
			
			void scan()
			{
				cout<<"Enter the name :  "<<endl;
				cin.getline(name,30);
				
				cout<<"Enter the age : "<<endl;
				cin>>age;
				cin.ignore(1);
			}
			void print()
			{
				cout<<name <<"  "<<age<<endl;
			}
			int search(char *str)
			{
				int res = strcmp(str,name);
			}
};

int main()
{
	Student std[4];
	int i;
	
	for(i=0;i<4;i++)
	{
		std[i].scan();
	}
	for(i=0;i<4;i++)
	{
		std[i].print();
	}
	
	int res;
	char str[90];
	cout<<"Enter the string want to search : "<<endl;
	cin.getline(str,89);
	
	for(i=0;i<4;i++)
	{
		res = std[i].search(&str[0]);
		
		if(res == 0)
		{
			cout<<"Found"<<endl;
		}
		
		
	}
	if(res==4)
	{
		cout<<"Not found"<<endl;
	}
	
	return 0;

}



