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
			
			void scandata()
			{
				cout<<"enter the name"<<endl;
				cin.getline(name,30);
				
				cout<<"enter the age :"<<endl;
				cin>>age;
				
				cout<<"enter the hometown : "<<endl;
				 cin.getline(hometown,20);
				 cin.getline(hometown,20);
			}
			void printdata()
			{
				cout<<name<<"  "<<age<<"  "<<hometown<<endl;
			}
	};
	
	int main()
	{
		Student s1,s2;
		
		s1.scandata();
		s2.scandata();
		s1.printdata();
		s2.printdata();
		
		return 0;
		
	}
