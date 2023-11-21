/* Q14.
	class Student
	{
		public:
			char name[30];
			int age;
			char hometown[20];
	}
Scan data of 2 Students from user.And print that data.
*/

#include<iostream>
using namespace std;

	class Student
	{
		public:
			char name[30];
			int age;
			char hometown[20];
			
			void scan()
			{
				cout<<"enter the name : "<<endl;
				cin.getline(name,30);
				cout<<"enter the age :";
				cin>>age;
				cout<<"ENter the home town :"<<endl;
				cin.getline(hometown,20);
				cin.getline(hometown,20);
				
				
			}
			
			void show()
			{
				cout<<name<<" ";
				cout<<age<<" " ;
				cout<<hometown<<" ";
			}
	};
int main()
{
	Student s1,s2;
	s1.scan();
	s2.scan();
	s1.show();
	s2.show();
	
	return 0;
}

