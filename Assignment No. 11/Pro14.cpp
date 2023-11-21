/*
Q13.
class Student
{
	private:
		char name[30];
		int age;
};
Create a database of 8 students.Print name and age of all
those students whose name is "virat".	
This program is to be done 2 times.
-Without operator overloading 
-With operator overloading.
(Think about main() first)
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
		
		Student()
		{
			cout<<"Enter the name : "<<endl;
			cin.getline(name,30);
			
			cout<<"Enter the age : "<<endl;
			cin>>age;
			cin.ignore(1);
		}
		
		int compair(char *p)
		{
			int res = strcmp(&p[0],&name[0]);
			
			if(res == 0)
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		void show()
		{
			cout<<name<<"  "<<age<<endl;
		}
};

int main()
{
	Student std[8];
	char str[30] = {"virat"};
	int i;
	
	for(i=0;i<8;i++)
	{
		if(std[i].compair(str)==1)
		{
			std[i].show();
		}
	}
	
	return 0;
}
