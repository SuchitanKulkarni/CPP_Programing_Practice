/* 
10.
class Student
{
	public:
		char name[30];
		int age;
};
Create a database of 4 students.Print them.
Do not add any member function.Write whole code in main() only.
Scan a name from user.Search student having this name in database.
*/

#include<iostream>
#include<string.h>
using namespace std;

class Student
{
	public:
		char name[30];
		int age;
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
		cin>>std[i].age;
		
		cin.ignore(1);
	}
	for(i=0;i<4;i++)
	{
		cout<<std[i].name<<" "<<std[i].age<<endl;
	}
	char str[90];
	cout<<"Enter the name you want to search : "<<endl;
	cin.getline(str,80);
	int res;
	for(i=0;i<4;i++)
	{
		 res = strcmp(str,std[i].name);
		
		if(res == 0)
		{
			cout<<"Found "<<endl;
		}
		
	}
	if(res == 4)
	{
		cout<<"not found"<<endl;
	}
	
	return 0;
}
